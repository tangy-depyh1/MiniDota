// domik.cpp : Определяет точку входа для приложения.
//

#include <math.h>
#include "framework.h"
#include "MiniDota.h"
#include <Windows.h>
#include<stdio.h>
#include <Shellapi.h>
#include <mmsystem.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include"DrawingModels.h"
#pragma comment(lib, "winmm.lib")
#include "MMSystem.h"


//#define DEBUG_GAME
#define MAX_LOADSTRING 100

// Глобальные переменные:
short raz = 1;
short max = 1800, min = 10;
short maxy = 1000, miny = -10;
short music = 0;
short SizeX = 384 / 2, SizeY = 216;
short step = 0;
RECT WinRect;
HDC Frame_DC = 0;
HBITMAP Frame_Bitmap = 0;
short Frame_DC_Width = 0, Frame_DC_Height = 0;
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна
// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.
    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MINIDOTA, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance(hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MINIDOTA));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int)msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDC_MINIDOTA));
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = CreateSolidBrush(RGB(55, 54, 84));
    wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_MINIDOTA);
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

    HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

    if (!hWnd)
    {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

struct Image { int cx; int cy; int vx; int vy; };
struct Image imANTI_MAG = { 300,200,10,0 };
struct Image imMONY = { 550,200,10,0 };
//LOSS
struct Image imCREEP1 = { 1196 + 192,270 + 216,10,0 };
struct Image imCREEP2 = { 691,270 + 216,10,0 };
struct Image imMANTA_STYLE1 = { 495 + 192,310 + 216,10,0 };
struct Image imMANTA_STYLE2 = { 1095 + 192,310 + 216,10,0 };
//FINAL
struct Image imHealing_slave1 = { 240,200,10,0 };
struct Image imHealing_slave2 = { 720,200,10,0 };
struct Image imHealing_slave3 = { 1200,200,10,0 };
struct Image imHealing_slave4 = { 1680,200,10,0 };
struct Image imMONY1 = { 240,800,-10,0 };
struct Image imMONY2 = { 720,800,-10,0 };
struct Image imMONY3 = { 1200,800,-10,0 };
struct Image imMONY4 = { 1680,800,-10,0 };
struct Image imANTI_MAGF = { 250 + 192,480,10,0 };
struct Image imCREEPF = { 1366 + 192,480,-10,0 };
struct Image imMANTA_STYLE3F = { 430,530,10,0 };
struct Image imMANTA_STYLE4F = { 1560,530,-10,0 };
//WIN
struct Image imMONYW = { 856 + 192,310,0,-5 };
enum Modes {
    MUSIC,
    START,
    GAME,
    WIN1,
    LOSS,
    FINISH,
};
enum Modes mode = MUSIC;
typedef struct AntyMag {
    int X;
    int Y;
    int Helth;
    int HasManta;
    int number_of_coins;
}Anty_Mag;
Anty_Mag anti_mag = { 700 + 192,200 + 216,7,0,6 };
typedef struct Object {
    int X;
    int Y;
    int Vision;
}OBJECT;
OBJECT mony[4] = {
    { 500 + SizeX,400 + 216,1},
    { 500 + SizeX,100 + 216,1},
    { 600 + SizeX,400 + 216,1},
    { 300 + SizeX,400 + 216,1}
};
typedef struct ms {
    int X;
    int Y;
    int Vision;
}MS;
MS manta = { 840 + 192,185 + 216,1 };
typedef struct creep {
    int X;
    int Y;
    int Helth;
    int Vision;
}CR;
CR creep[2] = {
    {100 + 192,400 + 216,1,1},
    {700 + 192,700 + 216,1,1}
};
OBJECT healing[2] = {
    {170 + 192,128,1} ,
    {570,428,1}
};
OBJECT illusion1 = { 0,0,0 };
OBJECT illusion2 = { 0,0, 0 };
void RandomSpawn() {
    srand(time(NULL));

    if (raz == 1) {
        //CREEP
        creep[0].X = rand() % (max - min + 1) + min;
        creep[1].X = rand() % (max - min + 1) + min;
        creep[0].Y = rand() % (maxy - miny + 1) + miny;
        creep[1].Y = rand() % (maxy - miny + 1) + miny;
        //MONY
        mony[0].X = rand() % (max - min + 1) + min;
        mony[1].X = rand() % (max - min + 1) + min;
        mony[2].X = rand() % (max - min + 1) + min;
        mony[3].X = rand() % (max - min + 1) + min;

        mony[0].Y = rand() % (maxy - miny + 1) + miny;
        mony[1].Y = rand() % (maxy - miny + 1) + miny;
        mony[2].Y = rand() % (maxy - miny + 1) + miny;
        mony[3].Y = rand() % (maxy - miny + 1) + miny;
        //MANTA
        manta.X = rand() % (max - min + 1) + min;
        manta.Y = rand() % (maxy - miny + 1) + miny;
    }
    raz = 0;
    if (creep[0].Vision == 0 || creep[0].Helth < 1) {
        creep[0].Vision = 1;
        creep[0].X = rand() % (1900 - 10 + 1) + 10;
        creep[0].Y = rand() % (1000 + 10 + 1) - 10;
        return;
    }


    if (creep[1].Vision == 0 || creep[1].Helth < 1) {
        creep[1].Vision = 1;
        creep[1].X = rand() % (1900 - 10 + 1) + 10;
        creep[1].Y = rand() % (1000 + 10 + 1) - 10;
        return;
    }

    if (rand() % 10 == 0) {
        if (manta.Vision == 0) {
            manta.X = rand() % (1900 - 10 + 1) + 10;
            manta.Y = rand() % (1000 + 10 + 1) - 10;
            manta.Vision = 1;
            return;
        }
    }
}
void Music() {
    PlaySound(TEXT("skyline_ryodan.wav"), NULL, SND_LOOP | SND_ASYNC);
}
void GoDirectionIllusion() {
    int dx = 0, dy = 0;
    if (illusion1.Vision) {
        if (creep[0].X > illusion1.X)
            dx = 8;
        if (creep[0].X < illusion1.X)
            dx = -8;
        if (creep[0].Y > illusion1.Y)
            dy = 8;
        if (creep[0].Y < illusion1.Y)
            dy = -8;
        illusion1.X += dx;
        illusion1.Y += dy;
    }

    if (illusion2.Vision) {
        if (creep[1].X > illusion2.X)
            dx = 8;
        if (creep[1].X < illusion2.X)
            dx = -8;
        if (creep[1].Y > illusion2.Y)
            dy = 8;
        if (creep[1].Y < illusion2.Y)
            dy = -8;
        illusion2.X += dx;
        illusion2.Y += dy;
    }

}
void statistics(HDC hdc) {
    HBRUSH hBrushbg = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(hdc, hBrushbg);
    Rectangle(hdc, 280 + 167, 630 + 216, 1320 + 192, 785 + 216);
    DeleteObject(hBrushbg);
    //Manta
    if (anti_mag.HasManta >= 1)
        MANTA_STYLE(hdc, 350 + 192, 730 + 216);
    //HP
    HBRUSH hBrushHP1 = CreateSolidBrush(RGB(34, 177, 76));
    SelectObject(hdc, hBrushHP1);
    if (anti_mag.Helth >= 1)
        Rectangle(hdc, 650 + 192, 680 + 216, 720 + 192, 710 + 216);
    if (anti_mag.Helth >= 2)
        Rectangle(hdc, 725 + 192, 680 + 216, 795 + 192, 710 + 216);
    if (anti_mag.Helth >= 3)
        Rectangle(hdc, 800 + 192, 680 + 216, 870 + 192, 710 + 216);
    if (anti_mag.Helth >= 4)
        Rectangle(hdc, 875 + 192, 680 + 216, 945 + 192, 710 + 216);
    if (anti_mag.Helth >= 5)
        Rectangle(hdc, 950 + 192, 680 + 216, 1020 + 192, 710 + 216);
    if (anti_mag.Helth >= 6)
        Rectangle(hdc, 1025 + 192, 680 + 216, 1095 + 192, 710 + 216);
    if (anti_mag.Helth >= 7)
        Rectangle(hdc, 1100 + 192, 680 + 216, 1170 + 192, 710 + 216);
    if (anti_mag.Helth >= 8)
        Rectangle(hdc, 1175 + 192, 680 + 216, 1245 + 192, 710 + 216);
    DeleteObject(hBrushHP1);
    //mony

    HBRUSH hBrushM = CreateSolidBrush(RGB(255, 232, 94));
    SelectObject(hdc, hBrushM);
    if (anti_mag.number_of_coins >= 1)
        Rectangle(hdc, 650 + 192, 730 + 216, 740 + 192, 760 + 216);
    if (anti_mag.number_of_coins >= 2)
        Rectangle(hdc, 745 + 192, 730 + 216, 835 + 192, 760 + 216);
    if (anti_mag.number_of_coins >= 3)
        Rectangle(hdc, 840 + 192, 730 + 216, 930 + 192, 760 + 216);
    if (anti_mag.number_of_coins >= 4)
        Rectangle(hdc, 935 + 192, 730 + 216, 1025 + 192, 760 + 216);
    if (anti_mag.number_of_coins >= 5)
        Rectangle(hdc, 1030 + 192, 730 + 216, 1120 + 192, 760 + 216);
    if (anti_mag.number_of_coins >= 6)
        Rectangle(hdc, 1125 + 192, 730 + 216, 1215 + 192, 760 + 216);
    DeleteObject(hBrushM);
    //icon
    ANTI_MAG(hdc, 510 + 192, 733 + 216);

}
void DrawGame(HDC hdc) {
    if (anti_mag.Helth > 0) {
        ANTI_MAG(hdc, anti_mag.X, anti_mag.Y);
    }
    if (mony[0].Vision > 0) {
        MONY(hdc, mony[0].X, mony[0].Y);
    }
    if (mony[1].Vision > 0) {
        MONY(hdc, mony[1].X, mony[1].Y);
    }
    if (mony[2].Vision > 0) {
        MONY(hdc, mony[2].X, mony[2].Y);
    }
    if (mony[3].Vision > 0) {
        MONY(hdc, mony[3].X, mony[3].Y);
    }
    if ((creep[0].Vision > 0) && (creep[0].Helth > 0)) {
        CREEP(hdc, creep[0].X, creep[0].Y);
    }
    if ((creep[1].Vision > 0) && (creep[1].Helth > 0)) {
        CREEP(hdc, creep[1].X, creep[1].Y);
    }

    if (manta.Vision) {
        MANTA_STYLE(hdc, manta.X, manta.Y);
    }

    if (illusion1.Vision) {
        ANTI_MAGILLUSION(hdc, illusion1.X, illusion1.Y);
    }
    if (illusion2.Vision) {
        ANTI_MAGILLUSION(hdc, illusion2.X, illusion2.Y);
    }
    if (healing[0].Vision) {
        Healing_Salve(hdc, healing[0].X, healing[0].Y);
    }
    if (healing[1].Vision) {
        Healing_Salve(hdc, healing[1].X, healing[1].Y);
    }

    statistics(hdc);
}
void TryToHealing() {
    if (healing[0].Vision) {
        if (anti_mag.X - 50 < healing[0].X + 30
            && anti_mag.X + 50 > healing[0].X - 25
            && anti_mag.Y - 50 < healing[0].Y + 25
            && anti_mag.Y + 100 > healing[0].Y - 30) {
            healing[0].Vision = 0;
            anti_mag.Helth += 5;
        }
    }
    if (healing[1].Vision) {
        if (anti_mag.X - 50 < healing[1].X + 30
            && anti_mag.X + 50 > healing[1].X - 25
            && anti_mag.Y - 50 < healing[1].Y + 25
            && anti_mag.Y + 100 > healing[1].Y - 30) {
            healing[1].Vision = 0;
            anti_mag.Helth += 5;
        }
    }
}
void TryToEatMony() {
    if (mony[0].Vision) {
        if (anti_mag.X - 50 < mony[0].X + 40
            && anti_mag.X + 50 > mony[0].X - 36
            && anti_mag.Y - 50 < mony[0].Y + 32
            && anti_mag.Y + 100 > mony[0].Y - 42
            ) {
            mony[0].Vision = 0;
            anti_mag.number_of_coins++;
        }
    }
    if (mony[1].Vision) {
        if (anti_mag.X - 50 < mony[1].X + 40
            && anti_mag.X + 50 > mony[1].X - 36
            && anti_mag.Y - 50 < mony[1].Y + 32
            && anti_mag.Y + 100 > mony[1].Y - 42
            ) {
            mony[1].Vision = 0;
            anti_mag.number_of_coins++;
        }
    }
    if (mony[2].Vision) {
        if (anti_mag.X - 50 < mony[2].X + 40
            && anti_mag.X + 50 > mony[2].X - 36
            && anti_mag.Y - 50 < mony[2].Y + 32
            && anti_mag.Y + 100 > mony[2].Y - 42
            ) {
            mony[2].Vision = 0;
            anti_mag.number_of_coins++;
        }
    }
    if (mony[3].Vision) {
        if (anti_mag.X - 50 < mony[3].X + 40
            && anti_mag.X + 50 > mony[3].X - 36
            && anti_mag.Y - 50 < mony[3].Y + 32
            && anti_mag.Y + 100 > mony[3].Y - 42
            ) {
            mony[3].Vision = 0;
            anti_mag.number_of_coins++;
        }
    }

}
void TryToEatManta() {

    if (manta.Vision) {
        if (manta.X - 38 < anti_mag.X + 50
            && manta.X + 62 > anti_mag.X - 50
            && manta.Y - 60 < anti_mag.Y + 100
            && manta.Y + 40 > anti_mag.Y - 50
            ) {
            manta.Vision = 0;
            anti_mag.HasManta++;
        }
    }

}
void GoDirection() {
    int dx = 0, dy = 0;
    if (creep[0].Vision && creep[0].Helth > 0) {
        if (anti_mag.HasManta == 0) {
            if (anti_mag.X > creep[0].X)
                dx = 8;
            if (anti_mag.X < creep[0].X)
                dx = -8;
            if (anti_mag.Y > creep[0].Y)
                dy = 8;
            if (anti_mag.Y < creep[0].Y)
                dy = -8;
        }
        if (anti_mag.HasManta == 1) {

            if (anti_mag.X > creep[0].X) {
                if (WinRect.left + 10 <= creep[0].X)
                    dx = -8;
            }
            if (anti_mag.X < creep[0].X) {
                if (WinRect.right - 10 >= creep[0].X)
                    dx = 8;
            }
            if (anti_mag.Y > creep[0].Y) {
                if (WinRect.top + 10 <= creep[0].Y)
                    dy = -8;
            }
            if (anti_mag.Y < creep[0].Y) {
                if (WinRect.bottom - 10 >= creep[0].Y)
                    dy = 8;
            }
        }
        creep[0].X += dx;
        creep[0].Y += dy;
    }


    if (creep[1].Vision && creep[1].Helth > 0) {
        if (anti_mag.HasManta == 0) {
            if (anti_mag.X > creep[1].X)
                dx = 10;
            if (anti_mag.X < creep[1].X)
                dx = -10;
            if (anti_mag.Y > creep[1].Y)
                dy = 10;
            if (anti_mag.Y < creep[1].Y)
                dy = -10;
        }
        if (anti_mag.HasManta == 1) {

            if (anti_mag.X > creep[1].X) {
                if (WinRect.left + 10 <= creep[1].X)
                    dx = -10;
            }
            if (anti_mag.X < creep[1].X) {
                if (WinRect.right - 10 >= creep[1].X)
                    dx = 10;
            }
            if (anti_mag.Y > creep[1].Y) {
                if (WinRect.top + 10 <= creep[1].Y)
                    dy = -10;
            }
            if (anti_mag.Y < creep[1].Y) {
                if (WinRect.bottom - 10 >= creep[1].Y)
                    dy = 10;
            }
        }
        creep[1].X += dx;
        creep[1].Y += dy;
    }

}
void ConectCreepAndAM() {
    if ((creep[0].Vision) && (creep[0].Helth > 0)) {
        if (anti_mag.X - 50 < creep[0].X + 54
            && anti_mag.X + 50 > creep[0].X - 50
            && anti_mag.Y - 50 < creep[0].Y + 95
            && anti_mag.Y + 100 > creep[0].Y - 60
            && anti_mag.HasManta) {
            creep[0].Vision = 0;
            anti_mag.HasManta--;
        }
        if (anti_mag.X - 50 < creep[0].X + 50
            && anti_mag.X + 50 > creep[0].X - 54
            && anti_mag.Y - 50 < creep[0].Y + 95
            && anti_mag.Y + 100 > creep[0].Y - 60) {
            anti_mag.Helth--;
        }

    }


    if ((creep[1].Vision) && (creep[1].Helth > 0)) {
        if (anti_mag.X - 50 < creep[1].X + 54
            && anti_mag.X + 50 > creep[1].X - 50
            && anti_mag.Y - 50 < creep[1].Y + 95
            && anti_mag.Y + 100 > creep[1].Y - 60
            && anti_mag.HasManta) {
            creep[1].Vision = 0;
            anti_mag.HasManta--;
        }
        if (anti_mag.X - 50 < creep[1].X + 50
            && anti_mag.X + 50 > creep[1].X - 54
            && anti_mag.Y - 50 < creep[1].Y + 95
            && anti_mag.Y + 100 > creep[1].Y - 60) {
            anti_mag.Helth--;
        }

    }

}
void ConectCreepAndAMillusion() {
    if (creep[0].Vision && creep[0].Helth > 0) {
        if (illusion1.Vision) {
            if (illusion1.X - 20 < creep[0].X
                && illusion1.X + 20 > creep[0].X
                && illusion1.Y - 20 < creep[0].Y
                && illusion1.Y + 20 > creep[0].Y) {
                creep[0].Helth = 0;
                creep[0].Vision = 0;
                illusion1.Vision = 0;
            }
        }
    }
    if (creep[1].Vision && creep[1].Helth > 0) {
        if (illusion2.Vision) {
            if (illusion2.X - 20 < creep[1].X
                && illusion2.X + 20 > creep[1].X
                && illusion2.Y - 20 < creep[1].Y
                && illusion2.Y + 20 > creep[1].Y) {
                creep[1].Helth = 0;
                creep[1].Vision = 0;
                illusion2.Vision = 0;
            }
        }
    }

}
void TextMD(HDC hdc, int cx, int cy) {
    HFONT hFont = CreateFont(40, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
    SelectObject(hdc, hFont);
    SetTextColor(hdc, RGB(33, 222, 71));
    SetBkMode(hdc, TRANSPARENT);
    TCHAR strT[180] = L"MINI DOTA";
    SetTextAlign(hdc, TA_CENTER);
    TextOut(hdc, cx, cy, (LPCWSTR)strT, _tcslen(strT));
    DeleteObject(hFont);

}
void Textby(HDC hdc, int cx, int cy) {
    HFONT hFont = CreateFont(20, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
    SelectObject(hdc, hFont);
    SetTextColor(hdc, RGB(33, 222, 71));
    TCHAR strT[180] = L"by: tangy-depth1";
    SetTextAlign(hdc, TA_CENTER);
    TextOut(hdc, cx, cy, (LPCWSTR)strT, _tcslen(strT));
    DeleteObject(hFont);

}
void WIN(HDC hdc) {
    int cx = 796 + 192, cy = 450, i = 0;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 756 + 192, cy = 490, i = 1;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 716 + 192, cy = 530, i = 2;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 676 + 192, cy = 570, i = 3;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);

    cx = 635 + 192, cy = 610, i = 4;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 595 + 192, cy = 650, i = 5;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 555 + 192, cy = 690, i = 6;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    cx = 515 + 192, cy = 730, i = 7;
    do {
        MONY(hdc, cx, cy);
        cx += 40;
        cy += 40;
        i++;
    } while (i < 8);
    ANTI_MAG(hdc, 795 + 192, 320);
    MONY(hdc, imMONYW.cx, imMONYW.cy);
    HFONT hFont = CreateFont(30, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
    SelectObject(hdc, hFont);
    SetBkMode(hdc, TRANSPARENT);
    SetTextColor(hdc, RGB(83, 198, 172));
    TCHAR strT[180] = L"GG WP";
    SetTextAlign(hdc, TA_CENTER);
    TextOut(hdc, 900 + 192, 210, (LPCWSTR)strT, _tcslen(strT));
    DeleteObject(hFont);
}
void TEXTWIN2(HDC hdc) {
    HFONT hFont = CreateFont(40, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
    SelectObject(hdc, hFont);
    SetBkMode(hdc, TRANSPARENT);
    SetTextColor(hdc, RGB(83, 198, 172));
    TCHAR strT[180] = L"SOLO";
    TextOut(hdc, 900 + 192, 250, (LPCWSTR)strT, _tcslen(strT));
    DeleteObject(hFont);
}
void LOSS1(HDC hdc) {
    ANTI_MAG(hdc, 780 + 192, 260 + 216);
    CREEP(hdc, imCREEP1.cx, imCREEP1.cy);
    CREEP(hdc, imCREEP2.cx, imCREEP2.cy);
    MANTA_STYLE(hdc, imMANTA_STYLE1.cx, imMANTA_STYLE1.cy);
    MANTA_STYLE(hdc, imMANTA_STYLE2.cx, imMANTA_STYLE2.cy);
    HFONT hFont = CreateFont(30, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
    SelectObject(hdc, hFont);
    SetBkMode(hdc, TRANSPARENT);
    SetTextAlign(hdc, TA_CENTER);
    SetTextColor(hdc, RGB(83, 198, 172));
    TCHAR strT[180] = L"I will not be afraid of vile witchcraft!";
    TextOut(hdc, 1100 + 192, 130 + 216, (LPCWSTR)strT, _tcslen(strT));
    DeleteObject(hFont);
}
void FINAL1(HDC hdc) {
    Healing_Salve(hdc, imHealing_slave1.cx, imHealing_slave1.cy);
    Healing_Salve(hdc, imHealing_slave2.cx, imHealing_slave2.cy);
    Healing_Salve(hdc, imHealing_slave3.cx, imHealing_slave3.cy);
    Healing_Salve(hdc, imHealing_slave4.cx, imHealing_slave4.cy);
    MONY(hdc, imMONY1.cx, imMONY1.cy);
    MONY(hdc, imMONY2.cx, imMONY2.cy);
    MONY(hdc, imMONY3.cx, imMONY3.cy);
    MONY(hdc, imMONY4.cx, imMONY4.cy);
    ANTI_MAG(hdc, imANTI_MAGF.cx, imANTI_MAGF.cy);
    CREEP(hdc, imCREEPF.cx, imCREEPF.cy);
    MANTA_STYLE(hdc, imMANTA_STYLE3F.cx, imMANTA_STYLE3F.cy);
    MANTA_STYLE(hdc, imMANTA_STYLE4F.cx, imMANTA_STYLE4F.cy);
}
void DC_Paint(HWND hwnd)
{
    int dc_width, dc_height;
    RECT rect;
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);
    GetClientRect(hwnd, &rect);
    dc_width = rect.right - rect.left;
    dc_height = rect.bottom - rect.top;
    if (dc_width != Frame_DC_Width || dc_height != Frame_DC_Height)
    {
        if (Frame_DC != 0)
            DeleteObject(Frame_DC);
        if (Frame_Bitmap != 0)
            DeleteObject(Frame_Bitmap);
        Frame_DC_Width = dc_width;
        Frame_DC_Height = dc_height;
        Frame_DC = CreateCompatibleDC(hdc);
        Frame_Bitmap = CreateCompatibleBitmap(hdc, Frame_DC_Width, Frame_DC_Height);
        SelectObject(Frame_DC, Frame_Bitmap);
    }
    HBRUSH hBrushbg = CreateSolidBrush(RGB(55, 54, 84));
    SelectObject(Frame_DC, hBrushbg);
    Rectangle(Frame_DC, -1, -1, rect.right, rect.bottom);
    DeleteObject(hBrushbg);
    if (mode == START) {
        TextMD(Frame_DC, 960, 480);
        Textby(Frame_DC, 960, 510);
        ANTI_MAG(Frame_DC, imANTI_MAG.cx, imANTI_MAG.cy);
        MONY(Frame_DC, imMONY.cx, imMONY.cy);
    }
    if (mode == GAME) {
        DrawGame(Frame_DC);
    }
    if (mode == WIN1) {
        WIN(Frame_DC);
        TEXTWIN2(Frame_DC);
    }
    if (mode == LOSS) {
        LOSS1(Frame_DC);
    }
    if (mode == FINISH) {
        FINAL1(Frame_DC);
    }

    BitBlt(hdc, 0, 0, Frame_DC_Width, Frame_DC_Height, Frame_DC, -1, -1, SRCCOPY);

    EndPaint(hwnd, &ps);

}
void KeepGame() {
    FILE* fout;
    fopen_s(&fout, "GameState.txt", "wt");
    if (fout == NULL) {
        return;
    }
    //anti-mag
    fprintf(fout, "%d %d %d %d %d\n", anti_mag.X, anti_mag.Y, anti_mag.Helth, anti_mag.HasManta, anti_mag.number_of_coins);
    //illusion
    fprintf(fout, "%d %d %d\n", illusion1.X, illusion1.Y, illusion1.Vision);
    fprintf(fout, "%d %d %d\n", illusion2.X, illusion2.Y, illusion2.Vision);
    //mony
    for (int i = 0; i < 4; i++) {
        fprintf(fout, "%d %d %d\n", mony[i].X, mony[i].Y, mony[i].Vision);
    }
    fprintf(fout, "\n\n\n");
    //healing

    for (int i = 0; i < 3; i++) {
        fprintf(fout, "%d %d %d\n", healing[i].X, healing[i].Y, healing[i].Vision);
    }
    fprintf(fout, "\n\n\n");
    for (int i = 0; i < 2; i++) {
        fprintf(fout, "%d %d %d %d\n", creep[i].X, creep[i].Y, creep[i].Helth, creep[i].Vision);
    }
    fprintf(fout, "\n\n\n");
    fprintf(fout, "%d %d %d\n", manta.X, manta.Y, manta.Vision);

    fclose(fout);


}
void LoadGame() {
    mode = GAME;
    FILE* fin;
    fopen_s(&fin, "GameState.txt", "rt");
    if (fin == NULL) {
        return;
    }
    //anti-mag
    fscanf_s(fin, "%d %d %d %d %d\n", &anti_mag.X, &anti_mag.Y, &anti_mag.Helth, &anti_mag.HasManta, &anti_mag.number_of_coins);
    //illusion
    fscanf_s(fin, "%d %d %d\n", &illusion1.X, &illusion1.Y, &illusion1.Vision);
    fscanf_s(fin, "%d %d %d\n", &illusion2.X, &illusion2.Y, &illusion2.Vision);
    //mony
    for (int i = 0; i < 4; i++) {
        fscanf_s(fin, "%d %d %d\n", &mony[i].X, &mony[i].Y, &mony[i].Vision);
    }
    fscanf_s(fin, "\n\n\n");
    //healing

    for (int i = 0; i < 3; i++) {
        fscanf_s(fin, "%d %d %d\n", &healing[i].X, &healing[i].Y, &healing[i].Vision);
    }
    fscanf_s(fin, "\n\n\n");
    for (int i = 0; i < 2; i++) {
        fscanf_s(fin, "%d %d %d %d\n", &creep[i].X, &creep[i].Y, &creep[i].Helth, &creep[i].Vision);
    }
    fscanf_s(fin, "\n\n\n");
    fscanf_s(fin, "%d %d %d\n", &manta.X, &manta.Y, &manta.Vision);

    fclose(fin);
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_ERASEBKGND: return TRUE;
        break;
    case WM_LBUTTONDOWN:
    {
        if (anti_mag.number_of_coins >= 3) {
            WORD xBlink, yBlink;

            // Сохраняем координаты курсора мыши
            xBlink = LOWORD(lParam);
            yBlink = HIWORD(lParam);

            int Vx = xBlink - anti_mag.X;
            int Vy = yBlink - anti_mag.Y;
            int Dy = yBlink, Dx = xBlink;
            float alpha = (atan2(Dx * Vy - Dy * Vx, Dx * Vx + Dy * Vy));
            float y = 300 * sin(alpha);
            float x = 300 * cos(alpha);

            anti_mag.X += x;
            anti_mag.Y += y;
            InvalidateRect(hWnd, NULL, TRUE);

            anti_mag.number_of_coins -= 3;
        }
    }
    break;

    case WM_COMMAND:
    {
        int wmId = LOWORD(wParam);
        // Разобрать выбор в меню:
        switch (wmId)
        {
        case IDM_ABOUT:
            DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
            break;
        case IDM_EXIT:
            DestroyWindow(hWnd);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
    }
    break;
    case WM_CREATE:
        SetTimer(hWnd, 1, 100, 0);
        break;
    case WM_TIMER:
        InvalidateRect(hWnd, NULL, TRUE);
        //WIN
        if (mode == MUSIC) {
            Music();
            mode = START;
        }
        if (mode == WIN1) {
            imMONYW.cy += imMONYW.vy;
            if (imMONYW.cy == 285) {
                imMONYW.vy = 5;
            }
            if (imMONYW.cy == 330) {
                imMONYW.vy = -5;
            }
        }
        //START
        //am
        if (mode == START) {

            imMONY.cx += imMONY.vx;
            imMONY.cy += imMONY.vy;
            imANTI_MAG.cx += imANTI_MAG.vx;
            imANTI_MAG.cy += imANTI_MAG.vy;
            if ((imANTI_MAG.cx == 1600) && (imANTI_MAG.cy == 200)) {
                imANTI_MAG.vx = 0;
                imANTI_MAG.vy = 10;
            }
            if ((imANTI_MAG.cy == 800) && (imANTI_MAG.cx == 1600)) {
                imANTI_MAG.vx = -10;
                imANTI_MAG.vy = 0;
            }
            if ((imANTI_MAG.cx == 300) && (imANTI_MAG.cy == 800)) {
                imANTI_MAG.vy = -10;
                imANTI_MAG.vx = 0;
            }
            if ((imANTI_MAG.cx == 300) && (imANTI_MAG.cy == 200)) {
                imANTI_MAG.vx = 10;
                imANTI_MAG.vy = 0;
            }
            //mony
            if ((imMONY.cx == 1600) && (imMONY.cy == 200)) {
                imMONY.vx = 0;
                imMONY.vy = 10;
            }
            if ((imMONY.cy == 800) && (imMONY.cx == 1600)) {
                imMONY.vx = -10;
                imMONY.vy = 0;
            }
            if ((imMONY.cx == 300) && (imMONY.cy == 800)) {
                imMONY.vy = -10;
                imMONY.vx = 0;
            }
            if ((imMONY.cx == 300) && (imMONY.cy == 200)) {
                imMONY.vx = 10;
                imMONY.vy = 0;
            }
        }
        if (mode == LOSS) {
            imCREEP2.cx += imCREEP2.vx;
            imCREEP1.cx += imCREEP1.vx;
            if (imCREEP1.cx == 150 + 1096 + 192) {
                imCREEP1.vx = -10;
            }
            if (imCREEP1.cx == 1096 + 192) {
                imCREEP1.vx = 10;
            }
            if (imCREEP2.cx == 741) {
                imCREEP2.vx = -10;
            }
            if (imCREEP2.cx == 641) {
                imCREEP2.vx = 10;
            }
            imMANTA_STYLE1.cx += imMANTA_STYLE1.vx;
            imMANTA_STYLE2.cx += imMANTA_STYLE2.vx;
            if (imMANTA_STYLE1.cx == 737) {
                imMANTA_STYLE1.vx = -10;
            }
            if (imMANTA_STYLE1.cx == 637) {
                imMANTA_STYLE1.vx = 10;
            }
            if (imMANTA_STYLE2.cx == 1337) {
                imMANTA_STYLE2.vx = -10;
            }
            if (imMANTA_STYLE2.cx == 1187) {
                imMANTA_STYLE2.vx = 10;
            }
        }
        //FINAL 
        if (mode == FINISH) {
            imHealing_slave1.cx += imHealing_slave1.vx;
            imHealing_slave2.cx += imHealing_slave2.vx;
            imHealing_slave3.cx += imHealing_slave3.vx;
            imHealing_slave4.cx += imHealing_slave4.vx;
            imANTI_MAGF.cx += imANTI_MAGF.vx;
            imCREEPF.cx += imCREEPF.vx;
            imMANTA_STYLE3F.cx += imMANTA_STYLE3F.vx;
            imMANTA_STYLE4F.cx += imMANTA_STYLE4F.vx;
            if (imMANTA_STYLE3F.cx == 430) {
                imMANTA_STYLE3F.vx = 10;
            }
            if (imMANTA_STYLE3F.cx == 850) {
                imMANTA_STYLE3F.vx = -10;
            }
            if (imMANTA_STYLE4F.cx == 1560) {
                imMANTA_STYLE4F.vx = -10;
            }
            if (imMANTA_STYLE4F.cx == 1140) {
                imMANTA_STYLE4F.vx = 10;
            }
            if (imANTI_MAGF.cx == -350 + 600 + 192) {
                imANTI_MAGF.vx = 10;
            }
            if (imANTI_MAGF.cx == 70 + 600 + 192) {
                imANTI_MAGF.vx = -10;
            }
            if (imCREEPF.cx == -150 + 1096 + 192) {
                imCREEPF.vx = 10;
            }
            if (imCREEPF.cx == 270 + 1096 + 192) {
                imCREEPF.vx = -10;
            }
            if (imHealing_slave1.cx == 2020) {
                imHealing_slave1.cx = -100;
            }
            if (imHealing_slave2.cx == 2020) {
                imHealing_slave2.cx = -100;
            }
            if (imHealing_slave3.cx == 2020) {
                imHealing_slave3.cx = -100;
            }
            if (imHealing_slave4.cx == 2020) {
                imHealing_slave4.cx = -100;
            }
            imMONY1.cx += imMONY1.vx;
            imMONY2.cx += imMONY2.vx;
            imMONY3.cx += imMONY3.vx;
            imMONY4.cx += imMONY4.vx;

            if (imMONY1.cx == -100) {
                imMONY1.cx = 2020;
            }
            if (imMONY2.cx == -100) {
                imMONY2.cx = 2020;
            }
            if (imMONY3.cx == -100) {
                imMONY3.cx = 2020;
            }
            if (imMONY4.cx == -100) {
                imMONY4.cx = 2020;
            }
        }
        InvalidateRect(hWnd, NULL, TRUE);
        if (mode == GAME) {

            RandomSpawn();
            GoDirection();
            GoDirectionIllusion();
            ConectCreepAndAM();
            ConectCreepAndAMillusion();
            TryToEatManta();
            TryToEatMony();
            TryToHealing();
            if (mony[0].Vision == 0 && mony[1].Vision == 0 && mony[2].Vision == 0 && mony[3].Vision == 0) {
                mode = WIN1;
            }
            if (anti_mag.Helth == 0) {
                mode = LOSS;
            }
            InvalidateRect(hWnd, NULL, TRUE);
        }

        if ((mode == WIN1) || (mode == LOSS)) {
            step++;
            if (step > 50)
                mode = FINISH;
        }
        break;

    case WM_KEYDOWN:
        ConectCreepAndAMillusion();
        TryToEatManta();
        TryToEatMony();
        TryToHealing();
        if (mode == START) {
            mode = GAME;
        }
        if (anti_mag.Helth < 1) {
            mode = LOSS;
        }

    case WM_CHAR:
        switch (wParam)
        {
        case 0x4B://k
            KeepGame();
            break;
        case 0x4c://l
            LoadGame();
            break;
        case 0x57:
            if (WinRect.top <= anti_mag.Y) {
                anti_mag.Y -= 11;// or "w"
                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;

        case 	0x53: // or 's'
            if (WinRect.bottom >= anti_mag.Y) {
                anti_mag.Y += 11;
                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;

        case 0x44: // or 'd'
            if (WinRect.right >= anti_mag.X) {
                anti_mag.X += 11;
                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;

        case 0x41:// or 'a'
            if (WinRect.left <= anti_mag.X) {
                anti_mag.X -= 11;
                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;

        default:
            break;

        case VK_SPACE:
            if (anti_mag.HasManta) {
                illusion1 = { anti_mag.X + 50,anti_mag.Y,1 };
                illusion2 = { anti_mag.X - 50,anti_mag.Y, 1 };
                anti_mag.HasManta = 0;
                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;

            InvalidateRect(hWnd, NULL, TRUE);
            break;

        }

    case WM_PAINT:
    {
        DC_Paint(hWnd);
        GetClientRect(hWnd, &WinRect);
    }
    break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;

}