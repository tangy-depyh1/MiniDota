#include"DrawingModels.h"

void Healing_Salve(HDC hdc, int cx, int cy) {
    //блеск 
    HPEN hPenblesk = CreatePen(PS_SOLID, 2, RGB(245, 190, 95));
    HBRUSH hBrushblesk = CreateSolidBrush(RGB(245, 190, 95));

    //карандаш и кисть для оконтовки фласки
    HPEN hPen1 = CreatePen(PS_SOLID, 2, RGB(9, 0, 0));
    HBRUSH hBrushhp = CreateSolidBrush(RGB(9, 0, 0));
    //кисть и карандаш для горлышка фласки 
    HPEN hPenr = CreatePen(PS_SOLID, 1, RGB(240, 196, 116));
    HBRUSH hBrushr = CreateSolidBrush(RGB(240, 186, 116));
    HPEN hPenrd = CreatePen(PS_SOLID, 1, RGB(204, 142, 22));
    HBRUSH hBrushrd = CreateSolidBrush(RGB(204, 142, 22));
    HPEN hPenrdd = CreatePen(PS_SOLID, 1, RGB(177, 106, 21));
    HBRUSH hBrushrdd = CreateSolidBrush(RGB(177, 106, 21));

    HPEN hPenrg = CreatePen(PS_SOLID, 1, RGB(129, 52, 5));
    HBRUSH hBrushrg = CreateSolidBrush(RGB(129, 52, 5));

    HPEN hPenrgg = CreatePen(PS_SOLID, 1, RGB(220, 141, 34));
    HBRUSH hBrushrgg = CreateSolidBrush(RGB(220, 141, 34));
    //зеленый темный могу писать что хочу мне вообще по иксу
    HPEN hPeng = CreatePen(PS_SOLID, 1, RGB(28, 97, 21));
    HBRUSH hBrushg = CreateSolidBrush(RGB(28, 97, 21));
    //зеленый но не светлый такой болотный 
    HPEN hPengd = CreatePen(PS_SOLID, 1, RGB(41, 125, 44));
    HBRUSH hBrushgd = CreateSolidBrush(RGB(41, 125, 44));
    //лайм 
    HPEN hPenl = CreatePen(PS_SOLID, 1, RGB(150, 246, 86));
    HBRUSH hBrushl = CreateSolidBrush(RGB(150, 246, 86));
    //лайм но темнее
    HPEN hPenld = CreatePen(PS_SOLID, 1, RGB(89, 197, 8));
    HBRUSH hBrushld = CreateSolidBrush(RGB(89, 197, 8));
    //зелёный
    HPEN hPenlg = CreatePen(PS_SOLID, 1, RGB(67, 180, 44));
    HBRUSH hBrushlg = CreateSolidBrush(RGB(67, 180, 44));
    //темно-золотой
    HPEN hPengoldd = CreatePen(PS_SOLID, 1, RGB(141, 71, 10));
    HBRUSH hBrushgoldd = CreateSolidBrush(RGB(141, 71, 10));
    //золотой 
    HPEN hPengold = CreatePen(PS_SOLID, 1, RGB(238, 183, 88));
    HBRUSH hBrushgold = CreateSolidBrush(RGB(238, 183, 88));
    //золотой - белый
    HPEN hPenw = CreatePen(PS_SOLID, 1, RGB(245, 227, 201));
    HBRUSH hBrushw = CreateSolidBrush(RGB(245, 227, 201));

    //оконтовка для фласки
    SelectObject(hdc, hPen1);
    SelectObject(hdc, hBrushhp);
    Rectangle(hdc, 878 - 870 + cx, 31 - 70 + cy, 889 - 870 + cx, 33 - 70 + cy);
    Rectangle(hdc, 876 - 870 + cx, 34 - 70 + cy, 878 - 870 + cx, 37 - 70 + cy);
    Rectangle(hdc, 873 - 870 + cx, 37 - 70 + cy, 875 - 870 + cx, 45 - 70 + cy);
    Rectangle(hdc, 855 - 870 + cx, 45 - 70 + cy, 873 - 870 + cx, 48 - 70 + cy);
    Rectangle(hdc, 849 - 870 + cx, 48 - 70 + cy, 855 - 870 + cx, 51 - 70 + cy);
    Rectangle(hdc, 847 - 870 + cx, 52 - 70 + cy, 848 - 870 + cx, 54 - 70 + cy);
    Rectangle(hdc, 844 - 870 + cx, 55 - 70 + cy, 846 - 870 + cx, 57 - 70 + cy);
    Rectangle(hdc, 842 - 870 + cx, 58 - 70 + cy, 843 - 870 + cx, 63 - 70 + cy);
    Rectangle(hdc, 838 - 870 + cx, 64 - 70 + cy, 841 - 870 + cx, 81 - 70 + cy);
    Rectangle(hdc, 842 - 870 + cx, 82 - 70 + cy, 843 - 870 + cx, 87 - 70 + cy);
    Rectangle(hdc, 844 - 870 + cx, 88 - 70 + cy, 846 - 870 + cx, 90 - 70 + cy);
    Rectangle(hdc, 847 - 870 + cx, 91 - 70 + cy, 848 - 870 + cx, 93 - 70 + cy);
    Rectangle(hdc, 849 - 870 + cx, 94 - 70 + cy, 856 - 870 + cx, 95 - 70 + cy);
    Rectangle(hdc, 856 - 870 + cx, 96 - 70 + cy, 875 - 870 + cx, 99 - 70 + cy);
    Rectangle(hdc, 876 - 870 + cx, 94 - 70 + cy, 882 - 870 + cx, 96 - 70 + cy);
    Rectangle(hdc, 882 - 870 + cx, 91 - 70 + cy, 883 - 870 + cx, 91 - 70 + cy);
    Rectangle(hdc, 883 - 870 + cx, 88 - 70 + cy, 889 - 870 + cx, 91 - 70 + cy);
    Rectangle(hdc, 890 - 870 + cx, 82 - 70 + cy, 892 - 870 + cx, 88 - 70 + cy);
    Rectangle(hdc, 892 - 870 + cx, 64 - 70 + cy, 894 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 890 - 870 + cx, 58 - 70 + cy, 892 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 883 - 870 + cx, 55 - 70 + cy, 889 - 870 + cx, 57 - 70 + cy);
    Rectangle(hdc, 890 - 870 + cx, 52 - 70 + cy, 892 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 892 - 870 + cx, 48 - 70 + cy, 894 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 894 - 870 + cx, 39 - 70 + cy, 897 - 870 + cx, 47 - 70 + cy);
    Rectangle(hdc, 892 - 870 + cx, 36 - 70 + cy, 894 - 870 + cx, 39 - 70 + cy);
    Rectangle(hdc, 890 - 870 + cx, 34 - 70 + cy, 892 - 870 + cx, 36 - 70 + cy);
    DeleteObject(hPen1);
    DeleteObject(hBrushhp);

    //крышка фласки
    SelectObject(hdc, hPenblesk);
    SelectObject(hdc, hBrushblesk);

    Rectangle(hdc, 878 - 870 + cx, 34 - 70 + cy, 883 - 870 + cx, 39 - 70 + cy);
    DeleteObject(hPenblesk);
    DeleteObject(hBrushblesk);
    SelectObject(hdc, hPenrd);
    SelectObject(hdc, hBrushrd);
    Rectangle(hdc, 883 - 870 + cx, 33 - 70 + cy, 889 - 870 + cx, 44 - 70 + cy);
    Rectangle(hdc, 878 - 870 + cx, 39 - 70 + cy, 889 - 870 + cx, 44 - 70 + cy);
    DeleteObject(hPenrd);
    DeleteObject(hBrushrd);
    SelectObject(hdc, hPenrdd);
    SelectObject(hdc, hBrushrdd);
    Rectangle(hdc, 875 - 870 + cx, 36 - 70 + cy, 878 - 870 + cx, 46 - 70 + cy);
    Rectangle(hdc, 878 - 870 + cx, 44 - 70 + cy, 889 - 870 + cx, 49 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 36 - 70 + cy, 892 - 870 + cx, 46 - 70 + cy);
    Rectangle(hdc, 864 - 870 + cx, 51 - 70 + cy, 873 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 57 - 70 + cy, 890 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 66 - 70 + cy, 892 - 870 + cx, 72 - 70 + cy);
    Rectangle(hdc, 859 - 870 + cx, 61 - 70 + cy, 863 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 61 - 70 + cy, 883 - 870 + cx, 64 - 70 + cy);
    DeleteObject(hPenrdd);
    DeleteObject(hBrushrdd);
    SelectObject(hdc, hPenrg);
    SelectObject(hdc, hBrushrg);
    Rectangle(hdc, 872 - 870 + cx, 45 - 70 + cy, 878 - 870 + cx, 48 - 70 + cy);
    Rectangle(hdc, 875 - 870 + cx, 47 - 70 + cy, 891 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 892 - 870 + cx, 38 - 70 + cy, 894 - 870 + cx, 48 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 45 - 70 + cy, 894 - 870 + cx, 48 - 70 + cy);
    Rectangle(hdc, 877 - 870 + cx, 51 - 70 + cy, 890 - 870 + cx, 55 - 70 + cy);
    DeleteObject(hPenrg);
    DeleteObject(hBrushrg);
    SelectObject(hdc, hPenrgg);
    SelectObject(hdc, hBrushrgg);
    Rectangle(hdc, 872 - 870 + cx, 47 - 70 + cy, 876 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 875 - 870 + cx, 51 - 70 + cy, 878 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 877 - 870 + cx, 54 - 70 + cy, 882 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 875 - 870 + cx, 57 - 70 + cy, 878 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 45 - 70 + cy, 894 - 870 + cx, 48 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 61 - 70 + cy, 883 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 882 - 870 + cx, 63 - 70 + cy, 890 - 870 + cx, 67 - 70 + cy);
    Rectangle(hdc, 880 - 870 + cx, 57 - 70 + cy, 890 - 870 + cx, 62 - 70 + cy);
    DeleteObject(hPenrgg);
    DeleteObject(hBrushrgg);
    SelectObject(hdc, hPeng);
    SelectObject(hdc, hBrushg);
    Rectangle(hdc, 864 - 870 + cx, 54 - 70 + cy, 873 - 870 + cx, 58 - 70 + cy);
    Rectangle(hdc, 882 - 870 + cx, 61 - 70 + cy, 890 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 63 - 70 + cy, 892 - 870 + cx, 68 - 70 + cy);
    Rectangle(hdc, 841 - 870 + cx, 63 - 70 + cy, 844 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 69 - 70 + cy, 892 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 877 - 870 + cx, 78 - 70 + cy, 890 - 870 + cx, 88 - 70 + cy);
    Rectangle(hdc, 875 - 870 + cx, 81 - 70 + cy, 890 - 870 + cx, 88 - 70 + cy);
    Rectangle(hdc, 868 - 870 + cx, 84 - 70 + cy, 883 - 870 + cx, 94 - 70 + cy);
    Rectangle(hdc, 846 - 870 + cx, 87 - 70 + cy, 883 - 870 + cx, 91 - 70 + cy);
    Rectangle(hdc, 848 - 870 + cx, 90 - 70 + cy, 876 - 870 + cx, 94 - 70 + cy);
    Rectangle(hdc, 855 - 870 + cx, 93 - 70 + cy, 876 - 870 + cx, 96 - 70 + cy);
    Rectangle(hdc, 843 - 870 + cx, 81 - 70 + cy, 847 - 870 + cx, 88 - 70 + cy);
    DeleteObject(hPeng);
    DeleteObject(hBrushg);
    //болотный часть бутылка низ право
    SelectObject(hdc, hPengd);
    SelectObject(hdc, hBrushgd);
    Rectangle(hdc, 841 - 870 + cx, 62 - 70 + cy, 844 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 843 - 870 + cx, 79 - 70 + cy, 847 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 846 - 870 + cx, 81 - 70 + cy, 853 - 870 + cx, 85 - 70 + cy);
    Rectangle(hdc, 847 - 870 + cx, 84 - 70 + cy, 869 - 870 + cx, 88 - 70 + cy);
    Rectangle(hdc, 868 - 870 + cx, 81 - 70 + cy, 876 - 870 + cx, 85 - 70 + cy);
    Rectangle(hdc, 872 - 870 + cx, 78 - 70 + cy, 878 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 877 - 870 + cx, 63 - 70 + cy, 882 - 870 + cx, 79 - 70 + cy);
    DeleteObject(hPengd);
    DeleteObject(hBrushgd);
    //лайм 
    SelectObject(hdc, hPenl);
    SelectObject(hdc, hBrushl);
    Rectangle(hdc, 852 - 870 + cx, 57 - 70 + cy, 856 - 870 + cx, 70 - 70 + cy);
    Rectangle(hdc, 848 - 870 + cx, 61 - 70 + cy, 853 - 870 + cx, 67 - 70 + cy);
    Rectangle(hdc, 855 - 870 + cx, 63 - 70 + cy, 860 - 870 + cx, 70 - 70 + cy);
    DeleteObject(hPenl);
    DeleteObject(hBrushl);
    ////лайм но темнее
    SelectObject(hdc, hPenld);
    SelectObject(hdc, hBrushld);
    Rectangle(hdc, 855 - 870 + cx, 47 - 70 + cy, 862 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 848 - 870 + cx, 51 - 70 + cy, 861 - 870 + cx, 53 - 70 + cy);
    Rectangle(hdc, 848 - 870 + cx, 52 - 70 + cy, 860 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 846 - 870 + cx, 54 - 70 + cy, 857 - 870 + cx, 58 - 70 + cy);
    Rectangle(hdc, 843 - 870 + cx, 57 - 70 + cy, 853 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 843 - 870 + cx, 61 - 70 + cy, 849 - 870 + cx, 68 - 70 + cy);
    Rectangle(hdc, 844 - 870 + cx, 66 - 70 + cy, 853 - 870 + cx, 69 - 70 + cy);
    Rectangle(hdc, 845 - 870 + cx, 68 - 70 + cy, 853 - 870 + cx, 70 - 70 + cy);
    Rectangle(hdc, 846 - 870 + cx, 69 - 70 + cy, 849 - 870 + cx, 71 - 70 + cy);
    Rectangle(hdc, 848 - 870 + cx, 69 - 70 + cy, 862 - 870 + cx, 73 - 70 + cy);
    Rectangle(hdc, 859 - 870 + cx, 66 - 70 + cy, 865 - 870 + cx, 70 - 70 + cy);
    DeleteObject(hPenld);
    DeleteObject(hBrushld);
    //зеленый
    SelectObject(hdc, hPenlg);
    SelectObject(hdc, hBrushlg);
    Rectangle(hdc, 872 - 870 + cx, 63 - 70 + cy, 878 - 870 + cx, 79 - 70 + cy);
    Rectangle(hdc, 864 - 870 + cx, 67 - 70 + cy, 873 - 870 + cx, 79 - 70 + cy);
    Rectangle(hdc, 861 - 870 + cx, 69 - 70 + cy, 873 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 852 - 870 + cx, 72 - 70 + cy, 869 - 870 + cx, 85 - 70 + cy);
    Rectangle(hdc, 846 - 870 + cx, 71 - 70 + cy, 854 - 870 + cx, 82 - 70 + cy);
    Rectangle(hdc, 844 - 870 + cx, 69 - 70 + cy, 847 - 870 + cx, 80 - 70 + cy);
    Rectangle(hdc, 843 - 870 + cx, 67 - 70 + cy, 845 - 870 + cx, 79 - 70 + cy);
    DeleteObject(hPenlg);
    DeleteObject(hBrushlg);
    //ручка
    SelectObject(hdc, hPengoldd);
    SelectObject(hdc, hBrushgoldd);
    Rectangle(hdc, 861 - 870 + cx, 47 - 70 + cy, 865 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 859 - 870 + cx, 51 - 70 + cy, 862 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 856 - 870 + cx, 54 - 70 + cy, 860 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 855 - 870 + cx, 57 - 70 + cy, 860 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 859 - 870 + cx, 63 - 70 + cy, 873 - 870 + cx, 67 - 70 + cy);
    Rectangle(hdc, 872 - 870 + cx, 61 - 70 + cy, 882 - 870 + cx, 64 - 70 + cy);
    Rectangle(hdc, 861 - 870 + cx, 53 - 70 + cy, 865 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 861 - 870 + cx, 57 - 70 + cy, 873 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 872 - 870 + cx, 54 - 70 + cy, 876 - 870 + cx, 58 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 63 - 70 + cy, 883 - 870 + cx, 67 - 70 + cy);
    Rectangle(hdc, 882 - 870 + cx, 66 - 70 + cy, 892 - 870 + cx, 70 - 70 + cy);
    Rectangle(hdc, 889 - 870 + cx, 68 - 70 + cy, 892 - 870 + cx, 72 - 70 + cy);
    Rectangle(hdc, 881 - 870 + cx, 54 - 70 + cy, 883 - 870 + cx, 62 - 70 + cy);
    DeleteObject(hPengoldd);
    DeleteObject(hBrushgoldd);
    //ручка залотой 
    SelectObject(hdc, hPengold);
    SelectObject(hdc, hBrushgold);
    Rectangle(hdc, 872 - 870 + cx, 51 - 70 + cy, 876 - 870 + cx, 55 - 70 + cy);
    Rectangle(hdc, 875 - 870 + cx, 54 - 70 + cy, 878 - 870 + cx, 58 - 70 + cy);
    Rectangle(hdc, 872 - 870 + cx, 57 - 70 + cy, 876 - 870 + cx, 62 - 70 + cy);
    Rectangle(hdc, 859 - 870 + cx, 54 - 70 + cy, 862 - 870 + cx, 61 - 70 + cy);
    Rectangle(hdc, 862 - 870 + cx, 61 - 70 + cy, 873 - 870 + cx, 64 - 70 + cy);
    DeleteObject(hPengold);
    DeleteObject(hBrushgold);
    //ручка белый 
    SelectObject(hdc, hPenw);
    SelectObject(hdc, hBrushw);
    Rectangle(hdc, 864 - 870 + cx, 47 - 70 + cy, 873 - 870 + cx, 52 - 70 + cy);
    Rectangle(hdc, 861 - 870 + cx, 51 - 70 + cy, 865 - 870 + cx, 55 - 70 + cy);
    DeleteObject(hPenw);
    DeleteObject(hBrushw);


}
void ANTI_MAG(HDC hdc, int cx, int cy) {

    //АНТИ-МАГ


    //эракес

    HPEN erokesp = CreatePen(PS_SOLID, 1, RGB(152, 58, 29));
    HBRUSH erokesb = CreateSolidBrush(RGB(152, 58, 29));

    //границы анти-мага1

    HPEN antimagp = CreatePen(PS_SOLID, 1, RGB(101, 24, 0));
    HBRUSH antimagb = CreateSolidBrush(RGB(101, 24, 0));

    //темная кожа

    HPEN antimag2p = CreatePen(PS_SOLID, 1, RGB(187, 106, 30));
    HBRUSH antimag2b = CreateSolidBrush(RGB(187, 106, 30));

    //кожа

    HPEN antimag3p = CreatePen(PS_SOLID, 1, RGB(213, 133, 58));
    HBRUSH antimag3b = CreateSolidBrush(RGB(213, 133, 58));



    //фиолетовый меж глаз

    HPEN antimag4p = CreatePen(PS_SOLID, 1, RGB(148, 104, 169));
    HBRUSH antimag4b = CreateSolidBrush(RGB(148, 104, 169));

    //пурпурный

    HPEN antimag5p = CreatePen(PS_SOLID, 1, RGB(203, 173, 218));
    HBRUSH antimag5b = CreateSolidBrush(RGB(203, 173, 218));

    //пурпурный

    HPEN antimag6p = CreatePen(PS_SOLID, 1, RGB(168, 160, 200));
    HBRUSH antimag6b = CreateSolidBrush(RGB(168, 160, 200));
    //черный глаз 

    HPEN antimageyep = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    HBRUSH antimageyeb = CreateSolidBrush(RGB(0, 0, 0));
    //серый глаз

    HPEN antimageyegreyp = CreatePen(PS_SOLID, 1, RGB(69, 65, 67));
    HBRUSH antimageyegreyb = CreateSolidBrush(RGB(69, 65, 67));
    //штаны

    HPEN antimag7p = CreatePen(PS_SOLID, 1, RGB(72, 55, 80));
    HBRUSH antimag7b = CreateSolidBrush(RGB(72, 55, 80));
    //тёмно фиолетовый но не темный 

    HPEN antimagvioletp = CreatePen(PS_SOLID, 1, RGB(96, 74, 107));
    HBRUSH antimagvioletb = CreateSolidBrush(RGB(96, 74, 107));
    //пальчики

    HPEN antimagvioletdp = CreatePen(PS_SOLID, 1, RGB(125, 75, 149));
    HBRUSH antimagvioletdb = CreateSolidBrush(RGB(125, 75, 149));

    //пальчики

    HPEN antimagmantap = CreatePen(PS_SOLID, 1, RGB(105, 195, 241));
    HBRUSH antimagmantab = CreateSolidBrush(RGB(105, 195, 241));

    //белый глаз

    HPEN antimageyewp = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    HBRUSH antimageyewb = CreateSolidBrush(RGB(255, 255, 255));

    //АНТИ-МАГ
    //белый глаз 

    SelectObject(hdc, antimageyewp);
    SelectObject(hdc, antimageyewb);
    Rectangle(hdc, 571 - 600 + cx, 203 - 190 + cy, 578 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 628 - 600 + cx, 203 - 190 + cy, 636 - 600 + cx, 214 - 190 + cy);
    DeleteObject(antimageyewp);
    DeleteObject(antimageyewb);

    //Эракес

    SelectObject(hdc, erokesp);
    SelectObject(hdc, erokesb);

    Rectangle(hdc, 592 - 600 + cx, 98 - 190 + cy, 617 - 600 + cx, 102 - 190 + cy);
    Rectangle(hdc, 591 - 600 + cx, 101 - 190 + cy, 616 - 600 + cx, 177 - 190 + cy);
    Rectangle(hdc, 570 - 600 + cx, 114 - 190 + cy, 579 - 600 + cx, 160 - 190 + cy);
    Rectangle(hdc, 626 - 600 + cx, 114 - 190 + cy, 636 - 600 + cx, 160 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 176 - 190 + cy, 571 - 600 + cx, 185 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 176 - 190 + cy, 640 - 600 + cx, 185 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 187 - 190 + cy, 591 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 590 - 600 + cx, 192 - 190 + cy, 598 - 600 + cx, 204 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 187 - 190 + cy, 636 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 608 - 600 + cx, 192 - 190 + cy, 616 - 600 + cx, 204 - 190 + cy);
    DeleteObject(erokesp);
    DeleteObject(erokesb);
    //Границы анти-мага1


    SelectObject(hdc, antimagp);
    SelectObject(hdc, antimagb);
    Rectangle(hdc, 570 - 600 + cx, 104 - 190 + cy, 592 - 600 + cx, 115 - 190 + cy);
    Rectangle(hdc, 570 - 600 + cx, 110 - 190 + cy, 576 - 600 + cx, 115 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 117 - 190 + cy, 571 - 600 + cx, 126 - 190 + cy);
    Rectangle(hdc, 556 - 600 + cx, 125 - 190 + cy, 563 - 600 + cx, 145 - 190 + cy);
    Rectangle(hdc, 544 - 600 + cx, 144 - 190 + cy, 555 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 529 - 600 + cx, 167 - 190 + cy, 545 - 600 + cx, 177 - 190 + cy);
    Rectangle(hdc, 529 - 600 + cx, 167 - 190 + cy, 537 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 538 - 600 + cx, 193 - 190 + cy, 554 - 600 + cx, 203 - 190 + cy);
    Rectangle(hdc, 578 - 600 + cx, 231 - 190 + cy, 591 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 591 - 600 + cx, 241 - 190 + cy, 616 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 231 - 190 + cy, 627 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 649 - 600 + cx, 144 - 190 + cy, 660 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 659 - 600 + cx, 167 - 190 + cy, 676 - 600 + cx, 177 - 190 + cy);
    Rectangle(hdc, 669 - 600 + cx, 176 - 190 + cy, 676 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 659 - 600 + cx, 192 - 190 + cy, 670 - 600 + cx, 203 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 125 - 190 + cy, 650 - 600 + cx, 145 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 117 - 190 + cy, 640 - 600 + cx, 126 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 104 - 190 + cy, 636 - 600 + cx, 115 - 190 + cy);
    DeleteObject(antimagp);
    DeleteObject(antimagb);
    //Кожа темная 

    SelectObject(hdc, antimag2p);
    SelectObject(hdc, antimag2b);
    Rectangle(hdc, 579 - 600 + cx, 115 - 190 + cy, 591 - 600 + cx, 118 - 190 + cy);
    Rectangle(hdc, 616 - 600 + cx, 115 - 190 + cy, 626 - 600 + cx, 118 - 190 + cy);
    Rectangle(hdc, 659 - 600 + cx, 176 - 190 + cy, 670 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 187 - 190 + cy, 650 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 639 - 600 + cx, 176 - 190 + cy, 645 - 600 + cx, 188 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 184 - 190 + cy, 645 - 600 + cx, 188 - 190 + cy);
    Rectangle(hdc, 639 - 600 + cx, 125 - 190 + cy, 645 - 600 + cx, 145 - 190 + cy);
    Rectangle(hdc, 554 - 600 + cx, 144 - 190 + cy, 557 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 556 - 600 + cx, 187 - 190 + cy, 563 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 184 - 190 + cy, 591 - 600 + cx, 188 - 190 + cy);
    Rectangle(hdc, 591 - 600 + cx, 231 - 190 + cy, 616 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 597 - 600 + cx, 221 - 190 + cy, 609 - 600 + cx, 234 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 176 - 190 + cy, 572 - 600 + cx, 184 - 190 + cy);
    Rectangle(hdc, 536 - 600 + cx, 176 - 190 + cy, 545 - 600 + cx, 193 - 190 + cy);
    DeleteObject(antimag2p);
    DeleteObject(antimag2b);
    //кожа

    SelectObject(hdc, antimag3p);
    SelectObject(hdc, antimag3b);

    Rectangle(hdc, 579 - 600 + cx, 117 - 190 + cy, 591 - 600 + cx, 185 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 125 - 190 + cy, 571 - 600 + cx, 176 - 190 + cy);
    Rectangle(hdc, 556 - 600 + cx, 144 - 190 + cy, 562 - 600 + cx, 187 - 190 + cy);
    Rectangle(hdc, 572 - 600 + cx, 160 - 190 + cy, 591 - 600 + cx, 185 - 190 + cy);
    Rectangle(hdc, 568 - 600 + cx, 160 - 190 + cy, 576 - 600 + cx, 176 - 190 + cy);
    Rectangle(hdc, 616 - 600 + cx, 117 - 190 + cy, 626 - 600 + cx, 184 - 190 + cy);
    Rectangle(hdc, 626 - 600 + cx, 160 - 190 + cy, 635 - 600 + cx, 184 - 190 + cy);
    Rectangle(hdc, 636 - 600 + cx, 126 - 190 + cy, 639 - 600 + cx, 176 - 190 + cy);
    Rectangle(hdc, 629 - 600 + cx, 160 - 190 + cy, 649 - 600 + cx, 176 - 190 + cy);
    Rectangle(hdc, 639 - 600 + cx, 145 - 190 + cy, 649 - 600 + cx, 176 - 190 + cy);
    Rectangle(hdc, 645 - 600 + cx, 145 - 190 + cy, 650 - 600 + cx, 187 - 190 + cy);
    Rectangle(hdc, 563 - 600 + cx, 188 - 190 + cy, 571 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 636 - 600 + cx, 188 - 190 + cy, 644 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 214 - 190 + cy, 636 - 600 + cx, 221 - 190 + cy);
    Rectangle(hdc, 579 - 600 + cx, 221 - 190 + cy, 597 - 600 + cx, 231 - 190 + cy);
    Rectangle(hdc, 608 - 600 + cx, 221 - 190 + cy, 627 - 600 + cx, 231 - 190 + cy);
    Rectangle(hdc, 590 - 600 + cx, 204 - 190 + cy, 598 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 608 - 600 + cx, 204 - 190 + cy, 616 - 600 + cx, 214 - 190 + cy);
    DeleteObject(antimag3p);
    DeleteObject(antimag3b);
    //фиолетовая метка между глаз

    SelectObject(hdc, antimag4p);
    SelectObject(hdc, antimag4b);

    Rectangle(hdc, 591 - 600 + cx, 176 - 190 + cy, 616 - 600 + cx, 193 - 190 + cy);
    Rectangle(hdc, 597 - 600 + cx, 192 - 190 + cy, 609 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 545 - 600 + cx, 222 - 190 + cy, 562 - 600 + cx, 231 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 231 - 190 + cy, 571 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 241 - 190 + cy, 579 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 578 - 600 + cx, 249 - 190 + cy, 591 - 600 + cx, 259 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 249 - 190 + cy, 627 - 600 + cx, 259 - 190 + cy);
    Rectangle(hdc, 627 - 600 + cx, 241 - 190 + cy, 636 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 231 - 190 + cy, 645 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 640 - 600 + cx, 221 - 190 + cy, 660 - 600 + cx, 232 - 190 + cy);
    Rectangle(hdc, 597 - 600 + cx, 258 - 190 + cy, 609 - 600 + cx, 265 - 190 + cy);
    DeleteObject(antimag4p);
    DeleteObject(antimag4b);
    //пурпурный

    SelectObject(hdc, antimag5p);
    SelectObject(hdc, antimag5b);


    Rectangle(hdc, 538 - 600 + cx, 203 - 190 + cy, 545 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 545 - 600 + cx, 213 - 190 + cy, 571 - 600 + cx, 222 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 221 - 190 + cy, 571 - 600 + cx, 232 - 190 + cy);
    Rectangle(hdc, 570 - 600 + cx, 221 - 190 + cy, 579 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 578 - 600 + cx, 241 - 190 + cy, 591 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 590 - 600 + cx, 249 - 190 + cy, 616 - 600 + cx, 259 - 190 + cy);
    Rectangle(hdc, 615 - 600 + cx, 241 - 190 + cy, 627 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 626 - 600 + cx, 249 - 190 + cy, 636 - 600 + cx, 259 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 241 - 190 + cy, 645 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 626 - 600 + cx, 221 - 190 + cy, 636 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 213 - 190 + cy, 660 - 600 + cx, 222 - 190 + cy);
    Rectangle(hdc, 660 - 600 + cx, 203 - 190 + cy, 670 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 231 - 190 + cy, 660 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 544 - 600 + cx, 231 - 190 + cy, 563 - 600 + cx, 241 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 241 - 190 + cy, 571 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 249 - 190 + cy, 579 - 600 + cx, 259 - 190 + cy);
    Rectangle(hdc, 635 - 600 + cx, 213 - 190 + cy, 640 - 600 + cx, 232 - 190 + cy);
    DeleteObject(antimag5p);
    DeleteObject(antimag5b);

    //голубой в глазах 

    SelectObject(hdc, antimag6p);
    SelectObject(hdc, antimag6b);

    Rectangle(hdc, 571 - 600 + cx, 193 - 190 + cy, 579 - 600 + cx, 203 - 190 + cy);
    Rectangle(hdc, 627 - 600 + cx, 193 - 190 + cy, 636 - 600 + cx, 203 - 190 + cy);
    DeleteObject(antimag6p);
    DeleteObject(antimag6b);
    //черный газа

    SelectObject(hdc, antimageyep);
    SelectObject(hdc, antimageyeb);
    Rectangle(hdc, 579 - 600 + cx, 203 - 190 + cy, 590 - 600 + cx, 214 - 190 + cy);
    Rectangle(hdc, 616 - 600 + cx, 203 - 190 + cy, 627 - 600 + cx, 214 - 190 + cy);
    DeleteObject(antimageyep);
    DeleteObject(antimageyeb);
    //серый глаз 

    SelectObject(hdc, antimageyegreyp);
    SelectObject(hdc, antimageyegreyb);

    Rectangle(hdc, 579 - 600 + cx, 193 - 190 + cy, 590 - 600 + cx, 203 - 190 + cy);
    Rectangle(hdc, 616 - 600 + cx, 193 - 190 + cy, 627 - 600 + cx, 203 - 190 + cy);

    DeleteObject(antimageyegreyp);
    DeleteObject(antimageyegreyb);
    //штаны 

    SelectObject(hdc, antimag7p);
    SelectObject(hdc, antimag7b);


    Rectangle(hdc, 578 - 600 + cx, 275 - 190 + cy, 628 - 600 + cx, 284 - 190 + cy);
    Rectangle(hdc, 556 - 600 + cx, 283 - 190 + cy, 650 - 600 + cx, 292 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 298 - 190 + cy, 579 - 600 + cx, 305 - 190 + cy);
    Rectangle(hdc, 627 - 600 + cx, 298 - 190 + cy, 644 - 600 + cx, 305 - 190 + cy);
    Rectangle(hdc, 530 - 600 + cx, 250 - 190 + cy, 571 - 600 + cx, 255 - 190 + cy);
    Rectangle(hdc, 636 - 600 + cx, 250 - 190 + cy, 676 - 600 + cx, 255 - 190 + cy);
    DeleteObject(antimag7p);
    DeleteObject(antimag7b);
    //темно светлый фиолетовый 

    SelectObject(hdc, antimagvioletp);
    SelectObject(hdc, antimagvioletb);


    Rectangle(hdc, 562 - 600 + cx, 292 - 190 + cy, 579 - 600 + cx, 298 - 190 + cy);
    Rectangle(hdc, 628 - 600 + cx, 292 - 190 + cy, 643 - 600 + cx, 298 - 190 + cy);
    Rectangle(hdc, 539 - 600 + cx, 265 - 190 + cy, 562 - 600 + cx, 275 - 190 + cy);
    Rectangle(hdc, 530 - 600 + cx, 255 - 190 + cy, 539 - 600 + cx, 265 - 190 + cy);
    Rectangle(hdc, 530 - 600 + cx, 255 - 190 + cy, 571 - 600 + cx, 258 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 256 - 190 + cy, 571 - 600 + cx, 266 - 190 + cy);
    Rectangle(hdc, 636 - 600 + cx, 255 - 190 + cy, 644 - 600 + cx, 264 - 190 + cy);
    Rectangle(hdc, 636 - 600 + cx, 255 - 190 + cy, 675 - 600 + cx, 258 - 190 + cy);
    Rectangle(hdc, 670 - 600 + cx, 255 - 190 + cy, 676 - 600 + cx, 264 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 264 - 190 + cy, 670 - 600 + cx, 275 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 241 - 190 + cy, 670 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 538 - 600 + cx, 241 - 190 + cy, 563 - 600 + cx, 250 - 190 + cy);
    Rectangle(hdc, 592 - 600 + cx, 265 - 190 + cy, 614 - 600 + cx, 276 - 190 + cy);
    DeleteObject(antimagvioletp);
    DeleteObject(antimagvioletb);

    //пальчики

    SelectObject(hdc, antimagvioletdp);
    SelectObject(hdc, antimagvioletdb);

    Rectangle(hdc, 539 - 600 + cx, 258 - 190 + cy, 562 - 600 + cx, 265 - 190 + cy);
    Rectangle(hdc, 644 - 600 + cx, 258 - 190 + cy, 670 - 600 + cx, 265 - 190 + cy);
    DeleteObject(antimagvioletdp);
    DeleteObject(antimagvioletdb);

    //манта у ам

    SelectObject(hdc, antimagmantap);
    SelectObject(hdc, antimagmantab);

    Rectangle(hdc, 500 - 600 + cx, 259 - 190 + cy, 530 - 600 + cx, 265 - 190 + cy);
    Rectangle(hdc, 510 - 600 + cx, 264 - 190 + cy, 539 - 600 + cx, 276 - 190 + cy);
    Rectangle(hdc, 519 - 600 + cx, 275 - 190 + cy, 579 - 600 + cx, 284 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 264 - 190 + cy, 592 - 600 + cx, 277 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 259 - 190 + cy, 598 - 600 + cx, 265 - 190 + cy);
    Rectangle(hdc, 609 - 600 + cx, 259 - 190 + cy, 636 - 600 + cx, 265 - 190 + cy);
    Rectangle(hdc, 614 - 600 + cx, 264 - 190 + cy, 645 - 600 + cx, 275 - 190 + cy);
    Rectangle(hdc, 628 - 600 + cx, 275 - 190 + cy, 688 - 600 + cx, 284 - 190 + cy);
    Rectangle(hdc, 670 - 600 + cx, 264 - 190 + cy, 696 - 600 + cx, 275 - 190 + cy);
    Rectangle(hdc, 676 - 600 + cx, 259 - 190 + cy, 705 - 600 + cx, 265 - 190 + cy);
    DeleteObject(antimagmantap);
    DeleteObject(antimagmantab);

}
void ANTI_MAGILLUSION(HDC hdc, int cx, int cy) {


    HPEN hPen = CreatePen(PS_SOLID, 1, RGB(153, 217, 234));
    HBRUSH hBrush = CreateSolidBrush(RGB(153, 217, 234));
    SelectObject(hdc, hPen);
    SelectObject(hdc, hBrush);



    Rectangle(hdc, 590 - 600 + cx, 98 - 190 + cy, 617 - 600 + cx, 292 - 190 + cy);
    Rectangle(hdc, 571 - 600 + cx, 104 - 190 + cy, 636 - 600 + cx, 292 - 190 + cy);
    Rectangle(hdc, 562 - 600 + cx, 117 - 190 + cy, 640 - 600 + cx, 292 - 190 + cy);

    Rectangle(hdc, 556 - 600 + cx, 125 - 190 + cy, 650 - 600 + cx, 292 - 190 + cy);

    Rectangle(hdc, 544 - 600 + cx, 144 - 190 + cy, 660 - 600 + cx, 284 - 190 + cy);

    Rectangle(hdc, 529 - 600 + cx, 167 - 190 + cy, 676 - 600 + cx, 193 - 190 + cy);

    Rectangle(hdc, 538 - 600 + cx, 192 - 190 + cy, 670 - 600 + cx, 222 - 190 + cy);

    Rectangle(hdc, 538 - 600 + cx, 241 - 190 + cy, 670 - 600 + cx, 250 - 190 + cy);

    Rectangle(hdc, 529 - 600 + cx, 249 - 190 + cy, 676 - 600 + cx, 284 - 190 + cy);

    Rectangle(hdc, 500 - 600 + cx, 258 - 190 + cy, 706 - 600 + cx, 265 - 190 + cy);

    Rectangle(hdc, 510 - 600 + cx, 264 - 190 + cy, 697 - 600 + cx, 276 - 190 + cy);
    Rectangle(hdc, 519 - 600 + cx, 275 - 190 + cy, 688 - 600 + cx, 284 - 190 + cy);

    Rectangle(hdc, 563 - 600 + cx, 291 - 190 + cy, 579 - 600 + cx, 305 - 190 + cy);

    Rectangle(hdc, 627 - 600 + cx, 291 - 190 + cy, 644 - 600 + cx, 305 - 190 + cy);

    DeleteObject(hPen);
    DeleteObject(hBrush);

}
void CREEP(HDC hdc, int cx, int cy) {

    //КРИП
    // капюшон темный

    HPEN kripdp = CreatePen(PS_SOLID, 1, RGB(21, 24, 29));
    HBRUSH kripdb = CreateSolidBrush(RGB(21, 24, 29));

    // зеленый

    HPEN kripgp = CreatePen(PS_SOLID, 1, RGB(35, 74, 20));
    HBRUSH kripgb = CreateSolidBrush(RGB(35, 74, 20));


    //темно-зеленый у крипа

    HPEN kripgdp = CreatePen(PS_SOLID, 1, RGB(19, 45, 9));
    HBRUSH kripgdb = CreateSolidBrush(RGB(19, 45, 9));
    //светло зеденый 

    HPEN kripgwp = CreatePen(PS_SOLID, 1, RGB(70, 120, 51));
    HBRUSH kripgwb = CreateSolidBrush(RGB(70, 120, 51));
    //коричневый штаны крип 

    HPEN kripbp = CreatePen(PS_SOLID, 1, RGB(100, 71, 8));
    HBRUSH kripbb = CreateSolidBrush(RGB(100, 71, 8));
    //темно коричневый штаны крип 

    HPEN kripbdp = CreatePen(PS_SOLID, 1, RGB(56, 39, 3));
    HBRUSH kripbdb = CreateSolidBrush(RGB(56, 39, 3));
    //темно коричневый штаны крип 

    HPEN kripbwp = CreatePen(PS_SOLID, 1, RGB(128, 96, 29));
    HBRUSH kripbwb = CreateSolidBrush(RGB(128, 96, 29));
    //темнее коричневого

    HPEN kripbdwp = CreatePen(PS_SOLID, 1, RGB(80, 56, 6));
    HBRUSH kripbdwb = CreateSolidBrush(RGB(80, 56, 6));
    //синий трусики

    HPEN kripbbp = CreatePen(PS_SOLID, 1, RGB(32, 58, 120));
    HBRUSH kripbbb = CreateSolidBrush(RGB(32, 58, 120));
    //синий трусики эмблема белый

    HPEN kripbbwp = CreatePen(PS_SOLID, 1, RGB(130, 161, 231));
    HBRUSH kripbbwb = CreateSolidBrush(RGB(130, 161, 231));
    // синий трусики эмблема белый jnntyjr

    HPEN kripbbwwp = CreatePen(PS_SOLID, 1, RGB(87, 112, 175));
    HBRUSH kripbbwwb = CreateSolidBrush(RGB(87, 112, 175));
    // РОГА темный 

    HPEN kripbrp = CreatePen(PS_SOLID, 1, RGB(88, 75, 56));
    HBRUSH kripbrb = CreateSolidBrush(RGB(88, 75, 56));
    // РОГА молочный

    HPEN kripbrmilkp = CreatePen(PS_SOLID, 1, RGB(143, 128, 104));
    HBRUSH kripbrmilkb = CreateSolidBrush(RGB(143, 128, 104));
    // РОГА молочный темнее

    HPEN kripbrmilkdp = CreatePen(PS_SOLID, 1, RGB(116, 102, 81));
    HBRUSH kripbrmilkdb = CreateSolidBrush(RGB(116, 102, 81));
    // ГЛАЗА КРИПА БЛЮ

    HPEN kripeyep = CreatePen(PS_SOLID, 1, RGB(130, 161, 231));
    HBRUSH kripeyeb = CreateSolidBrush(RGB(130, 161, 231));

    //оконтовка
    HPEN hPen1 = CreatePen(PS_SOLID, 2, RGB(9, 0, 0));
    HBRUSH hBrushhp = CreateSolidBrush(RGB(9, 0, 0));
    //КРИП КРИПОЧЕК 
    //капюшон темный 


    SelectObject(hdc, kripdp);
    SelectObject(hdc, kripdb);

    Rectangle(hdc, 1045 - 1096 + cx, 173 - 205 + cy, 1057 - 1096 + cx, 199 - 205 + cy);
    Rectangle(hdc, 1056 - 1096 + cx, 156 - 205 + cy, 1066 - 1096 + cx, 210 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 166 - 205 + cy, 1078 - 1096 + cx, 193 - 205 + cy);
    Rectangle(hdc, 1076 - 1096 + cx, 173 - 205 + cy, 1088 - 1096 + cx, 219 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 209 - 205 + cy, 1117 - 1096 + cx, 219 - 205 + cy);
    Rectangle(hdc, 1087 - 1096 + cx, 183 - 205 + cy, 1107 - 1096 + cx, 219 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 166 - 205 + cy, 1129 - 1096 + cx, 174 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 192 - 205 + cy, 1129 - 1096 + cx, 210 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 183 - 205 + cy, 1138 - 1096 + cx, 199 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 166 - 205 + cy, 1118 - 1096 + cx, 193 - 205 + cy);
    Rectangle(hdc, 1098 - 1096 + cx, 173 - 205 + cy, 1117 - 1096 + cx, 192 - 205 + cy);
    DeleteObject(kripdp);
    DeleteObject(kripdb);
    //зеленый 

    SelectObject(hdc, kripgp);
    SelectObject(hdc, kripgb);

    Rectangle(hdc, 1065 - 1096 + cx, 129 - 205 + cy, 1078 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 121 - 205 + cy, 1118 - 1096 + cx, 131 - 205 + cy);
    Rectangle(hdc, 1095 - 1096 + cx, 129 - 205 + cy, 1107 - 1096 + cx, 174 - 205 + cy);
    Rectangle(hdc, 1087 - 1096 + cx, 173 - 205 + cy, 1099 - 1096 + cx, 183 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 146 - 205 + cy, 1129 - 1096 + cx, 167 - 205 + cy);
    Rectangle(hdc, 1116 - 1096 + cx, 138 - 205 + cy, 1129 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1054 - 1096 + cx, 146 - 205 + cy, 1078 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 156 - 205 + cy, 1088 - 1096 + cx, 167 - 205 + cy);
    Rectangle(hdc, 1087 - 1096 + cx, 173 - 205 + cy, 1100 - 1096 + cx, 184 - 205 + cy);
    Rectangle(hdc, 1076 - 1096 + cx, 166 - 205 + cy, 1088 - 1096 + cx, 174 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 121 - 205 + cy, 1140 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 156 - 205 + cy, 1057 - 1096 + cx, 174 - 205 + cy);
    Rectangle(hdc, 1034 - 1096 + cx, 164 - 205 + cy, 1046 - 1096 + cx, 210 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 156 - 205 + cy, 1140 - 1096 + cx, 184 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 173 - 205 + cy, 1129 - 1096 + cx, 193 - 205 + cy);
    Rectangle(hdc, 1137 - 1096 + cx, 164 - 205 + cy, 1149 - 1096 + cx, 210 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 198 - 205 + cy, 1140 - 1096 + cx, 219 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 209 - 205 + cy, 1129 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1056 - 1096 + cx, 219 - 205 + cy, 1129 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1077 - 1096 + cx, 228 - 205 + cy, 1107 - 1096 + cx, 236 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 198 - 205 + cy, 1056 - 1096 + cx, 220 - 205 + cy);
    Rectangle(hdc, 1054 - 1096 + cx, 209 - 205 + cy, 1066 - 1096 + cx, 220 - 205 + cy);
    Rectangle(hdc, 1016 - 1096 + cx, 245 - 205 + cy, 1038 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 253 - 205 + cy, 1046 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1025 - 1096 + cx, 237 - 205 + cy, 1038 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1027 - 1096 + cx, 235 - 205 + cy, 1037 - 1096 + cx, 239 - 205 + cy);
    Rectangle(hdc, 1034 - 1096 + cx, 228 - 205 + cy, 1055 - 1096 + cx, 238 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 228 - 205 + cy, 1055 - 1096 + cx, 232 - 205 + cy);
    Rectangle(hdc, 1054 - 1096 + cx, 235 - 205 + cy, 1057 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1056 - 1096 + cx, 237 - 205 + cy, 1077 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1077 - 1096 + cx, 245 - 205 + cy, 1107 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 237 - 205 + cy, 1129 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 228 - 205 + cy, 1149 - 1096 + cx, 238 - 205 + cy);
    Rectangle(hdc, 1148 - 1096 + cx, 235 - 205 + cy, 1157 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1148 - 1096 + cx, 245 - 205 + cy, 1169 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1137 - 1096 + cx, 253 - 205 + cy, 1150 - 1096 + cx, 264 - 205 + cy);
    DeleteObject(kripgp);
    DeleteObject(kripgb);
    //темно-зеленый у крипа
    SelectObject(hdc, kripgdp);
    SelectObject(hdc, kripgdb);

    Rectangle(hdc, 1060 - 1096 + cx, 103 - 205 + cy, 1126 - 1096 + cx, 114 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 114 - 205 + cy, 1134 - 1096 + cx, 122 - 205 + cy);
    Rectangle(hdc, 1139 - 1096 + cx, 123 - 205 + cy, 1146 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1148 - 1096 + cx, 156 - 205 + cy, 1156 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1139 - 1096 + cx, 209 - 205 + cy, 1146 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 218 - 205 + cy, 1146 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 228 - 205 + cy, 1129 - 1096 + cx, 238 - 205 + cy);
    Rectangle(hdc, 1076 - 1096 + cx, 235 - 205 + cy, 1107 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1054 - 1096 + cx, 228 - 205 + cy, 1078 - 1096 + cx, 238 - 205 + cy);
    Rectangle(hdc, 1038 - 1096 + cx, 209 - 205 + cy, 1046 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 219 - 205 + cy, 1056 - 1096 + cx, 229 - 205 + cy);
    Rectangle(hdc, 1027 - 1096 + cx, 156 - 205 + cy, 1035 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1038 - 1096 + cx, 123 - 205 + cy, 1046 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1048 - 1096 + cx, 114 - 205 + cy, 1057 - 1096 + cx, 122 - 205 + cy);
    Rectangle(hdc, 1156 - 1096 + cx, 237 - 205 + cy, 1160 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1159 - 1096 + cx, 239 - 205 + cy, 1167 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1168 - 1096 + cx, 246 - 205 + cy, 1176 - 1096 + cx, 261 - 205 + cy);
    Rectangle(hdc, 1137 - 1096 + cx, 263 - 205 + cy, 1167 - 1096 + cx, 272 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 253 - 205 + cy, 1138 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 253 - 205 + cy, 1055 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1018 - 1096 + cx, 263 - 205 + cy, 1046 - 1096 + cx, 272 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 270 - 205 + cy, 1046 - 1096 + cx, 273 - 205 + cy);
    Rectangle(hdc, 1006 - 1096 + cx, 246 - 205 + cy, 1017 - 1096 + cx, 261 - 205 + cy);
    Rectangle(hdc, 1018 - 1096 + cx, 239 - 205 + cy, 1026 - 1096 + cx, 246 - 205 + cy);
    DeleteObject(kripgdp);
    DeleteObject(kripgdb);
    //светло зеленый

    SelectObject(hdc, kripgwp);
    SelectObject(hdc, kripgwb);

    Rectangle(hdc, 1045 - 1096 + cx, 121 - 205 + cy, 1066 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1056 - 1096 + cx, 113 - 205 + cy, 1107 - 1096 + cx, 130 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 138 - 205 + cy, 1095 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1077 - 1096 + cx, 129 - 205 + cy, 1095 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1087 - 1096 + cx, 156 - 205 + cy, 1096 - 1096 + cx, 174 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 130 - 205 + cy, 1117 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 113 - 205 + cy, 1129 - 1096 + cx, 122 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 121 - 205 + cy, 1129 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 130 - 205 + cy, 1129 - 1096 + cx, 139 - 205 + cy);
    DeleteObject(kripgwp);
    DeleteObject(kripgwb);
    //Оконтовка крипа 

    SelectObject(hdc, hPen1);
    SelectObject(hdc, hBrushhp);
    Rectangle(hdc, 1057 - 1096 + cx, 103 - 205 + cy, 1060 - 1096 + cx, 113 - 205 + cy);
    Rectangle(hdc, 1057 - 1096 + cx, 102 - 205 + cy, 1128 - 1096 + cx, 103 - 205 + cy);
    Rectangle(hdc, 1126 - 1096 + cx, 103 - 205 + cy, 1128 - 1096 + cx, 113 - 205 + cy);
    Rectangle(hdc, 1129 - 1096 + cx, 113 - 205 + cy, 1137 - 1096 + cx, 114 - 205 + cy);
    Rectangle(hdc, 1134 - 1096 + cx, 114 - 205 + cy, 1137 - 1096 + cx, 121 - 205 + cy);
    Rectangle(hdc, 1140 - 1096 + cx, 122 - 205 + cy, 1148 - 1096 + cx, 123 - 205 + cy);
    Rectangle(hdc, 1146 - 1096 + cx, 122 - 205 + cy, 1148 - 1096 + cx, 138 - 205 + cy);
    Rectangle(hdc, 1156 - 1096 + cx, 157 - 205 + cy, 1157 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1146 - 1096 + cx, 210 - 205 + cy, 1148 - 1096 + cx, 228 - 205 + cy);
    Rectangle(hdc, 1149 - 1096 + cx, 229 - 205 + cy, 1157 - 1096 + cx, 230 - 205 + cy);
    Rectangle(hdc, 1156 - 1096 + cx, 229 - 205 + cy, 1157 - 1096 + cx, 236 - 205 + cy);
    Rectangle(hdc, 1160 - 1096 + cx, 238 - 205 + cy, 1168 - 1096 + cx, 239 - 205 + cy);
    Rectangle(hdc, 1167 - 1096 + cx, 238 - 205 + cy, 1168 - 1096 + cx, 245 - 205 + cy);
    Rectangle(hdc, 1169 - 1096 + cx, 245 - 205 + cy, 1177 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1176 - 1096 + cx, 246 - 205 + cy, 1177 - 1096 + cx, 263 - 205 + cy);
    Rectangle(hdc, 1169 - 1096 + cx, 261 - 205 + cy, 1177 - 1096 + cx, 263 - 205 + cy);
    Rectangle(hdc, 1167 - 1096 + cx, 264 - 205 + cy, 1168 - 1096 + cx, 271 - 205 + cy);
    Rectangle(hdc, 1118 - 1096 + cx, 298 - 205 + cy, 1137 - 1096 + cx, 299 - 205 + cy);
    Rectangle(hdc, 1046 - 1096 + cx, 298 - 205 + cy, 1065 - 1096 + cx, 300 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 272 - 205 + cy, 1038 - 1096 + cx, 288 - 205 + cy);
    Rectangle(hdc, 1017 - 1096 + cx, 264 - 205 + cy, 1018 - 1096 + cx, 271 - 205 + cy);
    Rectangle(hdc, 1005 - 1096 + cx, 261 - 205 + cy, 1016 - 1096 + cx, 263 - 205 + cy);
    Rectangle(hdc, 1005 - 1096 + cx, 246 - 205 + cy, 1006 - 1096 + cx, 263 - 205 + cy);
    Rectangle(hdc, 1005 - 1096 + cx, 246 - 205 + cy, 1016 - 1096 + cx, 247 - 205 + cy);
    Rectangle(hdc, 1017 - 1096 + cx, 238 - 205 + cy, 1018 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1016 - 1096 + cx, 238 - 205 + cy, 1026 - 1096 + cx, 239 - 205 + cy);
    Rectangle(hdc, 1026 - 1096 + cx, 228 - 205 + cy, 1027 - 1096 + cx, 237 - 205 + cy);
    Rectangle(hdc, 1026 - 1096 + cx, 229 - 205 + cy, 1037 - 1096 + cx, 230 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 209 - 205 + cy, 1038 - 1096 + cx, 228 - 205 + cy);
    Rectangle(hdc, 1026 - 1096 + cx, 208 - 205 + cy, 1038 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1026 - 1096 + cx, 157 - 205 + cy, 1027 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 122 - 205 + cy, 1038 - 1096 + cx, 138 - 205 + cy);
    Rectangle(hdc, 1038 - 1096 + cx, 122 - 205 + cy, 1045 - 1096 + cx, 123 - 205 + cy);
    Rectangle(hdc, 1046 - 1096 + cx, 114 - 205 + cy, 1048 - 1096 + cx, 121 - 205 + cy);
    Rectangle(hdc, 1046 - 1096 + cx, 114 - 205 + cy, 1056 - 1096 + cx, 115 - 205 + cy);
    Rectangle(hdc, 1057 - 1096 + cx, 103 - 205 + cy, 1060 - 1096 + cx, 113 - 205 + cy);
    Rectangle(hdc, 1057 - 1096 + cx, 103 - 205 + cy, 1128 - 1096 + cx, 104 - 205 + cy);
    Rectangle(hdc, 1146 - 1096 + cx, 272 - 205 + cy, 1148 - 1096 + cx, 288 - 205 + cy);
    Rectangle(hdc, 1133 - 1096 + cx, 291 - 205 + cy, 1138 - 1096 + cx, 299 - 205 + cy);
    Rectangle(hdc, 1118 - 1096 + cx, 291 - 205 + cy, 1122 - 1096 + cx, 299 - 205 + cy);
    Rectangle(hdc, 1046 - 1096 + cx, 291 - 205 + cy, 1049 - 1096 + cx, 299 - 205 + cy);
    Rectangle(hdc, 1064 - 1096 + cx, 291 - 205 + cy, 1065 - 1096 + cx, 299 - 205 + cy);
    DeleteObject(hPen1);
    DeleteObject(hBrushhp);
    //коричневый 

    SelectObject(hdc, kripbp);
    SelectObject(hdc, kripbb);

    Rectangle(hdc, 1037 - 1096 + cx, 237 - 205 + cy, 1046 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1054 - 1096 + cx, 245 - 205 + cy, 1077 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 245 - 205 + cy, 1077 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 245 - 205 + cy, 1117 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 245 - 205 + cy, 1129 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1137 - 1096 + cx, 237 - 205 + cy, 1149 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 272 - 205 + cy, 1065 - 1096 + cx, 289 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 272 - 205 + cy, 1138 - 1096 + cx, 289 - 205 + cy);
    DeleteObject(kripbp);
    DeleteObject(kripbb);
    //тёмно коричневый 

    SelectObject(hdc, kripbdp);
    SelectObject(hdc, kripbdb);
    Rectangle(hdc, 1027 - 1096 + cx, 230 - 205 + cy, 1035 - 1096 + cx, 236 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 245 - 205 + cy, 1055 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 245 - 205 + cy, 1138 - 1096 + cx, 254 - 205 + cy);
    Rectangle(hdc, 1148 - 1096 + cx, 230 - 205 + cy, 1156 - 1096 + cx, 236 - 205 + cy);
    Rectangle(hdc, 1038 - 1096 + cx, 272 - 205 + cy, 1046 - 1096 + cx, 289 - 205 + cy);
    Rectangle(hdc, 1048 - 1096 + cx, 290 - 205 + cy, 1065 - 1096 + cx, 298 - 205 + cy);
    Rectangle(hdc, 1065 - 1096 + cx, 272 - 205 + cy, 1077 - 1096 + cx, 289 - 205 + cy);
    Rectangle(hdc, 1106 - 1096 + cx, 272 - 205 + cy, 1118 - 1096 + cx, 289 - 205 + cy);
    Rectangle(hdc, 1121 - 1096 + cx, 290 - 205 + cy, 1133 - 1096 + cx, 298 - 205 + cy);
    Rectangle(hdc, 1138 - 1096 + cx, 272 - 205 + cy, 1146 - 1096 + cx, 289 - 205 + cy);
    DeleteObject(kripbdp);
    DeleteObject(kripbdb);

    //светло коричневый 

    SelectObject(hdc, kripbwp);
    SelectObject(hdc, kripbwb);

    Rectangle(hdc, 1045 - 1096 + cx, 237 - 205 + cy, 1055 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1055 - 1096 + cx, 253 - 205 + cy, 1066 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1076 - 1096 + cx, 253 - 205 + cy, 1107 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1116 - 1096 + cx, 253 - 205 + cy, 1128 - 1096 + cx, 264 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 237 - 205 + cy, 1138 - 1096 + cx, 246 - 205 + cy);
    Rectangle(hdc, 1138 - 1096 + cx, 246 - 205 + cy, 1149 - 1096 + cx, 254 - 205 + cy);
    DeleteObject(kripbwp);
    DeleteObject(kripbwb);
    //темнее светлого 

    SelectObject(hdc, kripbdwp);
    SelectObject(hdc, kripbdwb);
    Rectangle(hdc, 1045 - 1096 + cx, 288 - 205 + cy, 1065 - 1096 + cx, 292 - 205 + cy);
    Rectangle(hdc, 1117 - 1096 + cx, 288 - 205 + cy, 1138 - 1096 + cx, 292 - 205 + cy);
    DeleteObject(kripbdwp);
    DeleteObject(kripbdwb);
    //трусики у крипа 

    SelectObject(hdc, kripbbp);
    SelectObject(hdc, kripbbb);
    Rectangle(hdc, 1045 - 1096 + cx, 263 - 205 + cy, 1138 - 1096 + cx, 273 - 205 + cy);
    Rectangle(hdc, 1076 - 1096 + cx, 272 - 205 + cy, 1107 - 1096 + cx, 289 - 205 + cy);
    DeleteObject(kripbbp);
    DeleteObject(kripbbb);
    //более светлый трусики (эмблема)

    SelectObject(hdc, kripbbwp);
    SelectObject(hdc, kripbbwb);
    Rectangle(hdc, 1087 - 1096 + cx, 272 - 205 + cy, 1096 - 1096 + cx, 281 - 205 + cy);
    DeleteObject(kripbbwp);
    DeleteObject(kripbbwb);
    //оттенок эмлемы 
    SelectObject(hdc, kripbbwwp);
    SelectObject(hdc, kripbbwwb);
    Rectangle(hdc, 1095 - 1096 + cx, 272 - 205 + cy, 1099 - 1096 + cx, 281 - 205 + cy);
    DeleteObject(kripbbwwp);
    DeleteObject(kripbbwwb);
    //рога темный 
    SelectObject(hdc, kripbrp);
    SelectObject(hdc, kripbrb);
    Rectangle(hdc, 995 - 1096 + cx, 121 - 205 + cy, 1013 - 1096 + cx, 124 - 205 + cy);
    Rectangle(hdc, 995 - 1096 + cx, 136 - 205 + cy, 997 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1034 - 1096 + cx, 130 - 205 + cy, 1038 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1045 - 1096 + cx, 138 - 205 + cy, 1066 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1025 - 1096 + cx, 146 - 205 + cy, 1054 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1034 - 1096 + cx, 156 - 205 + cy, 1046 - 1096 + cx, 165 - 205 + cy);
    Rectangle(hdc, 1181 - 1096 + cx, 121 - 205 + cy, 1190 - 1096 + cx, 124 - 205 + cy);
    Rectangle(hdc, 1187 - 1096 + cx, 121 - 205 + cy, 1190 - 1096 + cx, 131 - 205 + cy);
    Rectangle(hdc, 1189 - 1096 + cx, 130 - 205 + cy, 1199 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1169 - 1096 + cx, 138 - 205 + cy, 1188 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1128 - 1096 + cx, 138 - 205 + cy, 1140 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1139 - 1096 + cx, 146 - 205 + cy, 1169 - 1096 + cx, 157 - 205 + cy);
    Rectangle(hdc, 1139 - 1096 + cx, 156 - 205 + cy, 1149 - 1096 + cx, 165 - 205 + cy);
    DeleteObject(kripbrp);
    DeleteObject(kripbrb);
    //молочный рог
    SelectObject(hdc, kripbrmilkp);
    SelectObject(hdc, kripbrmilkb);
    Rectangle(hdc, 995 - 1096 + cx, 123 - 205 + cy, 1013 - 1096 + cx, 139 - 205 + cy);
    Rectangle(hdc, 1004 - 1096 + cx, 130 - 205 + cy, 1026 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1168 - 1096 + cx, 113 - 205 + cy, 1178 - 1096 + cx, 122 - 205 + cy);
    Rectangle(hdc, 1168 - 1096 + cx, 121 - 205 + cy, 1182 - 1096 + cx, 131 - 205 + cy);
    Rectangle(hdc, 1181 - 1096 + cx, 123 - 205 + cy, 1188 - 1096 + cx, 131 - 205 + cy);
    Rectangle(hdc, 1148 - 1096 + cx, 130 - 205 + cy, 1190 - 1096 + cx, 139 - 205 + cy);
    DeleteObject(kripbrmilkp);
    DeleteObject(kripbrmilkb);
    //молочный рог темнее
    SelectObject(hdc, kripbrmilkdp);
    SelectObject(hdc, kripbrmilkdb);
    Rectangle(hdc, 1025 - 1096 + cx, 130 - 205 + cy, 1038 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1037 - 1096 + cx, 138 - 205 + cy, 1046 - 1096 + cx, 147 - 205 + cy);
    Rectangle(hdc, 1139 - 1096 + cx, 138 - 205 + cy, 1169 - 1096 + cx, 147 - 205 + cy);
    DeleteObject(kripbrmilkdp);
    DeleteObject(kripbrmilkdb);
    //САМЫЕ КРАСИВЫЕ ГЛАЗА 
    SelectObject(hdc, kripeyep);
    SelectObject(hdc, kripeyeb);
    Rectangle(hdc, 1066 - 1096 + cx, 193 - 205 + cy, 1077 - 1096 + cx, 209 - 205 + cy);
    Rectangle(hdc, 1107 - 1096 + cx, 193 - 205 + cy, 1117 - 1096 + cx, 209 - 205 + cy);
    DeleteObject(kripeyep);
    DeleteObject(kripeyeb);

}
void MONY(HDC hdc, int cx, int cy) {

    //МОНЕТКА
    //оконтовка 
    HPEN hPenmonok = CreatePen(PS_SOLID, 1, RGB(216, 134, 0));
    HBRUSH hBrushmonok = CreateSolidBrush(RGB(216, 134, 0));
    //светлее оеонтовки 

    HPEN hPenmonokd = CreatePen(PS_SOLID, 1, RGB(255, 175, 49));
    HBRUSH hBrushmonokd = CreateSolidBrush(RGB(255, 175, 49));
    //Жёлто-золотой 

    HPEN hPenmongold = CreatePen(PS_SOLID, 1, RGB(255, 232, 94));
    HBRUSH hBrushmongold = CreateSolidBrush(RGB(255, 232, 94));

    //коричневый

    HPEN brownp = CreatePen(PS_SOLID, 1, RGB(157, 81, 5));
    HBRUSH brownb = CreateSolidBrush(RGB(157, 81, 5));
    //менее коричневый

    HPEN brownwp = CreatePen(PS_SOLID, 1, RGB(202, 101, 2));
    HBRUSH brownwb = CreateSolidBrush(RGB(202, 101, 2));
    //белый

    HPEN whitep = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    HBRUSH whiteb = CreateSolidBrush(RGB(255, 255, 255));
    //МОНЕТКА
            //Оконтовка 

    SelectObject(hdc, hPenmonok);
    SelectObject(hdc, hBrushmonok);
    Rectangle(hdc, 848 - 866 + cx, 200 - 230 + cy, 882 - 866 + cx, 210 - 230 + cy);
    Rectangle(hdc, 881 - 866 + cx, 209 - 230 + cy, 894 - 866 + cx, 218 - 230 + cy);
    Rectangle(hdc, 893 - 866 + cx, 217 - 230 + cy, 900 - 866 + cx, 236 - 230 + cy);
    Rectangle(hdc, 838 - 866 + cx, 209 - 230 + cy, 849 - 866 + cx, 219 - 230 + cy);
    Rectangle(hdc, 830 - 866 + cx, 217 - 230 + cy, 839 - 866 + cx, 236 - 230 + cy);
    Rectangle(hdc, 838 - 866 + cx, 244 - 230 + cy, 849 - 866 + cx, 254 - 230 + cy);
    Rectangle(hdc, 848 - 866 + cx, 252 - 230 + cy, 856 - 866 + cx, 262 - 230 + cy);
    DeleteObject(hPenmonok);
    DeleteObject(hBrushmonok);

    //светлее оконтовки 

    SelectObject(hdc, hPenmonokd);
    SelectObject(hdc, hBrushmonokd);
    Rectangle(hdc, 855 - 866 + cx, 252 - 230 + cy, 875 - 866 + cx, 262 - 230 + cy);
    DeleteObject(hPenmonokd);
    DeleteObject(hBrushmonokd);

    //ЗОЛОТОЙ - ЖЁЛТЫЙ 

    SelectObject(hdc, hPenmongold);
    SelectObject(hdc, hBrushmongold);
    Rectangle(hdc, 848 - 866 + cx, 209 - 230 + cy, 882 - 866 + cx, 227 - 230 + cy);
    Rectangle(hdc, 862 - 866 + cx, 218 - 230 + cy, 894 - 866 + cx, 236 - 230 + cy);
    Rectangle(hdc, 874 - 866 + cx, 252 - 230 + cy, 882 - 866 + cx, 262 - 230 + cy);
    Rectangle(hdc, 881 - 866 + cx, 244 - 230 + cy, 894 - 866 + cx, 254 - 230 + cy);
    DeleteObject(hPenmongold);
    DeleteObject(hBrushmongold);

    //Коричнивый 

    SelectObject(hdc, brownp);
    SelectObject(hdc, brownb);
    Rectangle(hdc, 830 - 866 + cx, 235 - 230 + cy, 849 - 866 + cx, 245 - 230 + cy);
    Rectangle(hdc, 830 - 866 + cx, 235 - 230 + cy, 839 - 866 + cx, 254 - 230 + cy);
    Rectangle(hdc, 848 - 866 + cx, 244 - 230 + cy, 882 - 866 + cx, 254 - 230 + cy);
    Rectangle(hdc, 838 - 866 + cx, 253 - 230 + cy, 849 - 866 + cx, 262 - 230 + cy);
    Rectangle(hdc, 848 - 866 + cx, 261 - 230 + cy, 882 - 866 + cx, 272 - 230 + cy);
    DeleteObject(brownp);
    DeleteObject(brownb);

    //Менее темно коричневый 

    SelectObject(hdc, brownwp);
    SelectObject(hdc, brownwb);

    Rectangle(hdc, 881 - 866 + cx, 235 - 230 + cy, 900 - 866 + cx, 245 - 230 + cy);
    Rectangle(hdc, 893 - 866 + cx, 244 - 230 + cy, 900 - 866 + cx, 254 - 230 + cy);
    Rectangle(hdc, 881 - 866 + cx, 252 - 230 + cy, 894 - 866 + cx, 262 - 230 + cy);
    DeleteObject(brownwp);
    DeleteObject(brownwb);
    //блеск у монетки 

    SelectObject(hdc, whitep);
    SelectObject(hdc, whiteb);

    Rectangle(hdc, 838 - 866 + cx, 217 - 230 + cy, 849 - 866 + cx, 236 - 230 + cy);
    Rectangle(hdc, 848 - 866 + cx, 226 - 230 + cy, 863 - 866 + cx, 245 - 230 + cy);
    Rectangle(hdc, 862 - 866 + cx, 235 - 230 + cy, 882 - 866 + cx, 245 - 230 + cy);
    DeleteObject(whitep);
    DeleteObject(whiteb);

}
void MANTA_STYLE(HDC hdc, int cx, int cy) {

    //МАНТААА
    //еле голубой 
    HPEN mantawp = CreatePen(PS_SOLID, 1, RGB(208, 228, 252));
    HBRUSH mantawb = CreateSolidBrush(RGB(208, 228, 252));

    //еле голубой 
    HPEN mantawbp = CreatePen(PS_SOLID, 1, RGB(187, 209, 232));
    HBRUSH mantawbb = CreateSolidBrush(RGB(187, 209, 232));
    //голубой 
    HPEN mantabp = CreatePen(PS_SOLID, 1, RGB(166, 210, 247));
    HBRUSH mantabb = CreateSolidBrush(RGB(166, 210, 247));
    //темно голубой 
    HPEN mantadbp = CreatePen(PS_SOLID, 1, RGB(136, 175, 204));
    HBRUSH mantadbb = CreateSolidBrush(RGB(136, 175, 204));
    //темно голубой 
    HPEN mantaviolp = CreatePen(PS_SOLID, 1, RGB(126, 70, 146));
    HBRUSH mantaviolb = CreateSolidBrush(RGB(126, 70, 146));
    //темно голубой 
    HPEN mantavioldp = CreatePen(PS_SOLID, 1, RGB(108, 57, 124));
    HBRUSH mantavioldb = CreateSolidBrush(RGB(108, 57, 124));
    //красный
    HPEN mantaredp = CreatePen(PS_SOLID, 1, RGB(165, 19, 22));
    HBRUSH mantaredb = CreateSolidBrush(RGB(165, 19, 22));
    //черно фиолетовый 
    HPEN mantaviolddp = CreatePen(PS_SOLID, 1, RGB(62, 34, 72));
    HBRUSH mantaviolddb = CreateSolidBrush(RGB(62, 34, 72));

    //МАНТА
    //еле голубой
    SelectObject(hdc, mantawp);
    SelectObject(hdc, mantawb);
    Rectangle(hdc, 330 - 335 + cx, 202 - 260 + cy, 344 - 335 + cx, 208 - 260 + cy);
    Rectangle(hdc, 326 - 335 + cx, 207 - 260 + cy, 336 - 335 + cx, 214 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 211 - 260 + cy, 331 - 335 + cx, 224 - 260 + cy);
    Rectangle(hdc, 318 - 335 + cx, 213 - 260 + cy, 331 - 335 + cx, 224 - 260 + cy);
    Rectangle(hdc, 311 - 335 + cx, 217 - 260 + cy, 324 - 335 + cx, 234 - 260 + cy);
    Rectangle(hdc, 309 - 335 + cx, 222 - 260 + cy, 319 - 335 + cx, 238 - 260 + cy);
    Rectangle(hdc, 307 - 335 + cx, 223 - 260 + cy, 319 - 335 + cx, 238 - 260 + cy);
    Rectangle(hdc, 303 - 335 + cx, 226 - 260 + cy, 312 - 335 + cx, 239 - 260 + cy);
    Rectangle(hdc, 301 - 335 + cx, 229 - 260 + cy, 312 - 335 + cx, 243 - 260 + cy);
    Rectangle(hdc, 305 - 335 + cx, 238 - 260 + cy, 310 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 301 - 335 + cx, 255 - 260 + cy, 310 - 335 + cx, 268 - 260 + cy);
    Rectangle(hdc, 305 - 335 + cx, 264 - 260 + cy, 312 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 307 - 335 + cx, 268 - 260 + cy, 319 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 311 - 335 + cx, 277 - 260 + cy, 319 - 335 + cx, 285 - 260 + cy);
    Rectangle(hdc, 318 - 335 + cx, 264 - 260 + cy, 324 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 268 - 260 + cy, 326 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 272 - 260 + cy, 327 - 335 + cx, 281 - 260 + cy);
    Rectangle(hdc, 324 - 335 + cx, 272 - 260 + cy, 327 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 275 - 260 + cy, 331 - 335 + cx, 281 - 260 + cy);
    Rectangle(hdc, 330 - 335 + cx, 278 - 260 + cy, 337 - 335 + cx, 285 - 260 + cy);
    DeleteObject(mantawp);
    DeleteObject(mantawb);
    //темнее голубого
    SelectObject(hdc, mantawbp);
    SelectObject(hdc, mantawbb);
    Rectangle(hdc, 318 - 335 + cx, 273 - 260 + cy, 324 - 335 + cx, 289 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 280 - 260 + cy, 331 - 335 + cx, 291 - 260 + cy);
    Rectangle(hdc, 326 - 335 + cx, 284 - 260 + cy, 337 - 335 + cx, 295 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 288 - 260 + cy, 345 - 335 + cx, 294 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 294 - 260 + cy, 348 - 335 + cx, 300 - 260 + cy);
    DeleteObject(mantawbp);
    DeleteObject(mantawbb);
    //голубой
    SelectObject(hdc, mantabp);
    SelectObject(hdc, mantabb);
    Rectangle(hdc, 323 - 335 + cx, 233 - 260 + cy, 327 - 335 + cx, 247 - 260 + cy);
    Rectangle(hdc, 318 - 335 + cx, 242 - 260 + cy, 324 - 335 + cx, 265 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 264 - 260 + cy, 327 - 335 + cx, 269 - 260 + cy);
    Rectangle(hdc, 325 - 335 + cx, 267 - 260 + cy, 331 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 326 - 335 + cx, 272 - 260 + cy, 334 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 330 - 335 + cx, 275 - 260 + cy, 337 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 278 - 260 + cy, 344 - 335 + cx, 285 - 260 + cy);
    Rectangle(hdc, 343 - 335 + cx, 280 - 260 + cy, 357 - 335 + cx, 285 - 260 + cy);
    Rectangle(hdc, 326 - 335 + cx, 246 - 260 + cy, 337 - 335 + cx, 256 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 248 - 260 + cy, 348 - 335 + cx, 256 - 260 + cy);
    Rectangle(hdc, 344 - 335 + cx, 246 - 260 + cy, 348 - 335 + cx, 256 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 237 - 260 + cy, 351 - 335 + cx, 249 - 260 + cy);
    Rectangle(hdc, 350 - 335 + cx, 233 - 260 + cy, 358 - 335 + cx, 238 - 260 + cy);
    Rectangle(hdc, 354 - 335 + cx, 229 - 260 + cy, 358 - 335 + cx, 238 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 255 - 260 + cy, 345 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 343 - 335 + cx, 272 - 260 + cy, 348 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 275 - 260 + cy, 367 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 366 - 335 + cx, 267 - 260 + cy, 376 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 371 - 335 + cx, 255 - 260 + cy, 376 - 335 + cx, 273 - 260 + cy);
    DeleteObject(mantabp);
    DeleteObject(mantabb);
    //темно голцбой 
    SelectObject(hdc, mantadbp);
    SelectObject(hdc, mantadbb);
    Rectangle(hdc, 326 - 335 + cx, 242 - 260 + cy, 331 - 335 + cx, 247 - 260 + cy);
    Rectangle(hdc, 323 - 335 + cx, 246 - 260 + cy, 327 - 335 + cx, 265 - 260 + cy);
    Rectangle(hdc, 326 - 335 + cx, 264 - 260 + cy, 331 - 335 + cx, 268 - 260 + cy);
    Rectangle(hdc, 330 - 335 + cx, 259 - 260 + cy, 337 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 333 - 335 + cx, 272 - 260 + cy, 337 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 275 - 260 + cy, 344 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 343 - 335 + cx, 278 - 260 + cy, 366 - 335 + cx, 281 - 260 + cy);
    Rectangle(hdc, 356 - 335 + cx, 280 - 260 + cy, 358 - 335 + cx, 285 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 284 - 260 + cy, 359 - 335 + cx, 289 - 260 + cy);
    Rectangle(hdc, 344 - 335 + cx, 288 - 260 + cy, 359 - 335 + cx, 294 - 260 + cy);
    Rectangle(hdc, 359 - 335 + cx, 290 - 260 + cy, 366 - 335 + cx, 294 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 293 - 260 + cy, 351 - 335 + cx, 300 - 260 + cy);
    Rectangle(hdc, 344 - 335 + cx, 268 - 260 + cy, 348 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 272 - 260 + cy, 351 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 365 - 335 + cx, 272 - 260 + cy, 372 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 366 - 335 + cx, 263 - 260 + cy, 372 - 335 + cx, 268 - 260 + cy);
    Rectangle(hdc, 344 - 335 + cx, 237 - 260 + cy, 348 - 335 + cx, 247 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 246 - 260 + cy, 345 - 335 + cx, 249 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 233 - 260 + cy, 351 - 335 + cx, 238 - 260 + cy);
    Rectangle(hdc, 350 - 335 + cx, 229 - 260 + cy, 355 - 335 + cx, 234 - 260 + cy);
    DeleteObject(mantadbp);
    DeleteObject(mantadbb);
    //фиолет ручка манта
    SelectObject(hdc, mantaviolp);
    SelectObject(hdc, mantaviolb);
    Rectangle(hdc, 335 - 335 + cx, 233 - 260 + cy, 343 - 335 + cx, 243 - 260 + cy);
    Rectangle(hdc, 330 - 335 + cx, 234 - 260 + cy, 336 - 335 + cx, 239 - 260 + cy);
    Rectangle(hdc, 342 - 335 + cx, 238 - 260 + cy, 345 - 335 + cx, 243 - 260 + cy);
    Rectangle(hdc, 336 - 335 + cx, 242 - 260 + cy, 343 - 335 + cx, 247 - 260 + cy);
    Rectangle(hdc, 347 - 335 + cx, 248 - 260 + cy, 351 - 335 + cx, 264 - 260 + cy);
    Rectangle(hdc, 350 - 335 + cx, 253 - 260 + cy, 355 - 335 + cx, 265 - 260 + cy);
    Rectangle(hdc, 354 - 335 + cx, 259 - 260 + cy, 359 - 335 + cx, 268 - 260 + cy);
    Rectangle(hdc, 357 - 335 + cx, 263 - 260 + cy, 365 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 357 - 335 + cx, 263 - 260 + cy, 367 - 335 + cx, 268 - 260 + cy);
    Rectangle(hdc, 371 - 335 + cx, 272 - 260 + cy, 377 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 375 - 335 + cx, 275 - 260 + cy, 383 - 335 + cx, 281 - 260 + cy);
    Rectangle(hdc, 376 - 335 + cx, 278 - 260 + cy, 391 - 335 + cx, 285 - 260 + cy);
    DeleteObject(mantaviolp);
    DeleteObject(mantaviolb);
    //темно фиолетовый 
    SelectObject(hdc, mantavioldp);
    SelectObject(hdc, mantavioldb);
    Rectangle(hdc, 335 - 335 + cx, 229 - 260 + cy, 344 - 335 + cx, 234 - 260 + cy);
    Rectangle(hdc, 342 - 335 + cx, 233 - 260 + cy, 345 - 335 + cx, 239 - 260 + cy);
    Rectangle(hdc, 350 - 335 + cx, 248 - 260 + cy, 355 - 335 + cx, 254 - 260 + cy);
    Rectangle(hdc, 354 - 335 + cx, 253 - 260 + cy, 358 - 335 + cx, 256 - 260 + cy);
    Rectangle(hdc, 344 - 335 + cx, 255 - 260 + cy, 348 - 335 + cx, 260 - 260 + cy);
    Rectangle(hdc, 358 - 335 + cx, 259 - 260 + cy, 366 - 335 + cx, 264 - 260 + cy);
    Rectangle(hdc, 366 - 335 + cx, 275 - 260 + cy, 372 - 335 + cx, 279 - 260 + cy);
    Rectangle(hdc, 376 - 335 + cx, 281 - 260 + cy, 383 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 382 - 335 + cx, 275 - 260 + cy, 393 - 335 + cx, 279 - 260 + cy);
    DeleteObject(mantavioldp);
    DeleteObject(mantavioldb);
    //красный 
    SelectObject(hdc, mantaredp);
    SelectObject(hdc, mantaredb);
    Rectangle(hdc, 341 - 335 + cx, 242 - 260 + cy, 345 - 335 + cx, 247 - 260 + cy);
    Rectangle(hdc, 364 - 335 + cx, 267 - 260 + cy, 367 - 335 + cx, 273 - 260 + cy);
    Rectangle(hdc, 358 - 335 + cx, 272 - 260 + cy, 366 - 335 + cx, 276 - 260 + cy);
    Rectangle(hdc, 390 - 335 + cx, 278 - 260 + cy, 393 - 335 + cx, 285 - 260 + cy);
    Rectangle(hdc, 382 - 335 + cx, 284 - 260 + cy, 391 - 335 + cx, 289 - 260 + cy);
    DeleteObject(mantaredp);
    DeleteObject(mantaredb);
    //темно темно фиолетовый 
    SelectObject(hdc, mantaviolddp);
    SelectObject(hdc, mantaviolddb);
    Rectangle(hdc, 392 - 335 + cx, 280 - 260 + cy, 397 - 335 + cx, 291 - 260 + cy);
    Rectangle(hdc, 390 - 335 + cx, 284 - 260 + cy, 401 - 335 + cx, 291 - 260 + cy);
    Rectangle(hdc, 394 - 335 + cx, 284 - 260 + cy, 401 - 335 + cx, 294 - 260 + cy);
    Rectangle(hdc, 396 - 335 + cx, 293 - 260 + cy, 401 - 335 + cx, 300 - 260 + cy);
    DeleteObject(mantaviolddp);
    DeleteObject(mantaviolddb);

}
void puge(HDC hdc, int cx, int cy) {


    HPEN pinkp = CreatePen(PS_SOLID, 2, RGB(204, 155, 151));
    HBRUSH pinkb = CreateSolidBrush(RGB(204, 155, 151));
    SelectObject(hdc, pinkp);
    SelectObject(hdc, pinkb);
    Rectangle(hdc, 114 - 128 + cx, 8 - 115 + cy, 126 - 128 + cx, 14 - 115 + cy);
    Rectangle(hdc, 114 - 128 + cx, 8 - 115 + cy, 120 - 128 + cx, 21 - 115 + cy);
    Rectangle(hdc, 93 - 128 + cx, 8 - 115 + cy, 106 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 86 - 128 + cx, 15 - 115 + cy, 98 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 22 - 115 + cy, 105 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 28 - 115 + cy, 78 - 128 + cx, 71 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 28 - 115 + cy, 78 - 128 + cx, 71 - 115 + cy);
    Rectangle(hdc, 64 - 128 + cx, 50 - 115 + cy, 77 - 128 + cx, 71 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 36 - 115 + cy, 84 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 84 - 128 + cx, 43 - 115 + cy, 93 - 128 + cx, 50 - 115 + cy);
    Rectangle(hdc, 106 - 128 + cx, 29 - 115 + cy, 112 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 36 - 115 + cy, 112 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 43 - 115 + cy, 112 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 64 - 115 + cy, 112 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 78 - 115 + cy, 92 - 128 + cx, 85 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 85 - 115 + cy, 105 - 128 + cx, 92 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 92 - 115 + cy, 105 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 99 - 115 + cy, 99 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 113 - 115 + cy, 84 - 128 + cx, 119 - 115 + cy);
    Rectangle(hdc, 64 - 128 + cx, 92 - 115 + cy, 70 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 99 - 115 + cy, 78 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 99 - 115 + cy, 85 - 128 + cx, 106 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 106 - 115 + cy, 92 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 15 - 115 + cy, 148 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 22 - 115 + cy, 127 - 128 + cx, 56 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 22 - 115 + cy, 155 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 28 - 115 + cy, 148 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 36 - 115 + cy, 134 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 43 - 115 + cy, 155 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 36 - 115 + cy, 155 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 64 - 115 + cy, 128 - 128 + cx, 78 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 71 - 115 + cy, 135 - 128 + cx, 85 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 78 - 115 + cy, 148 - 128 + cx, 85 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 85 - 115 + cy, 155 - 128 + cx, 92 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 15 - 115 + cy, 162 - 128 + cx, 21 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 22 - 115 + cy, 169 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 168 - 128 + cx, 36 - 115 + cy, 176 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 50 - 115 + cy, 183 - 128 + cx, 78 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 64 - 115 + cy, 176 - 128 + cx, 70 - 115 + cy);
    Rectangle(hdc, 183 - 128 + cx, 58 - 115 + cy, 189 - 128 + cx, 78 - 115 + cy);
    Rectangle(hdc, 50 - 128 + cx, 198 - 115 + cy, 78 - 128 + cx, 211 - 115 + cy);
    Rectangle(hdc, 77 - 128 + cx, 205 - 115 + cy, 84 - 128 + cx, 211 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 198 - 115 + cy, 197 - 128 + cx, 211 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 205 - 115 + cy, 170 - 128 + cx, 211 - 115 + cy);
    DeleteObject(pinkp);
    DeleteObject(pinkb);

    HPEN pinkdp = CreatePen(PS_SOLID, 2, RGB(157, 118, 119));
    HBRUSH pinkdb = CreateSolidBrush(RGB(157, 118, 119));
    SelectObject(hdc, pinkdp);
    SelectObject(hdc, pinkdb);
    Rectangle(hdc, 106 + cx - 128, 15 - 115 + cy, 112 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 29 - 115 + cy, 105 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 29 - 115 + cy, 85 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 36 - 115 + cy, 99 - 128 + cx, 42 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 50 - 115 + cy, 91 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 64 - 115 + cy, 84 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 71 - 115 + cy, 77 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 64 - 128 + cx, 85 - 115 + cy, 70 - 128 + cx, 91 - 115 + cy);
    Rectangle(hdc, 71 - 128 + cx, 92 - 115 + cy, 84 - 128 + cx, 98 - 115 + cy);
    Rectangle(hdc, 86 - 128 + cx, 100 - 115 + cy, 91 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 106 - 115 + cy, 84 - 128 + cx, 112 - 115 + cy);
    Rectangle(hdc, 72 - 128 + cx, 114 - 115 + cy, 77 - 128 + cx, 119 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 78 - 115 + cy, 112 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 29 - 115 + cy, 162 - 128 + cx, 36 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 57 - 115 + cy, 127 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 64 - 115 + cy, 155 - 128 + cx, 70 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 71 - 115 + cy, 155 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 78 - 115 + cy, 155 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 44 - 115 + cy, 182 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 50 - 115 + cy, 176 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 64 - 115 + cy, 169 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 169 - 128 + cx, 71 - 115 + cy, 176 - 128 + cx, 91 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 79 - 115 + cy, 189 - 128 + cx, 84 - 115 + cy);
    DeleteObject(pinkdp);
    DeleteObject(pinkdb);

    HPEN fartukp = CreatePen(PS_SOLID, 2, RGB(128, 144, 134));
    HBRUSH fartukb = CreateSolidBrush(RGB(128, 144, 134));
    SelectObject(hdc, fartukp);
    SelectObject(hdc, fartukb);
    Rectangle(hdc, 113 - 128 + cx, 50 - 115 + cy, 120 - 128 + cx, 70 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 79 - 115 + cy, 127 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 113 - 128 + cx, 85 - 115 + cy, 120 - 128 + cx, 98 - 115 + cy);
    Rectangle(hdc, 106 - 128 + cx, 92 - 115 + cy, 120 - 128 + cx, 98 - 115 + cy);
    Rectangle(hdc, 100 - 128 + cx, 100 - 115 + cy, 105 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 93 - 128 + cx, 106 - 115 + cy, 105 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 114 - 115 + cy, 91 - 128 + cx, 119 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 120 - 115 + cy, 98 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 135 - 115 + cy, 141 - 128 + cx, 141 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 121 - 115 + cy, 134 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 113 - 128 + cx, 142 - 115 + cy, 133 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 121 - 115 + cy, 134 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 128 - 115 + cy, 134 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 100 - 115 + cy, 134 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 107 - 115 + cy, 141 - 128 + cx, 120 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 106 - 115 + cy, 162 - 128 + cx, 120 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 37 - 115 + cy, 162 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 160 - 128 + cx, 78 - 115 + cy, 169 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 92 - 115 + cy, 162 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 142 - 128 + cx, 99 - 115 + cy, 155 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 105 - 115 + cy, 155 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 106 - 115 + cy, 176 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 142 - 115 + cy, 169 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 142 - 115 + cy, 183 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 149 - 115 + cy, 176 - 128 + cx, 155 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 156 - 115 + cy, 183 - 128 + cx, 162 - 115 + cy);
    Rectangle(hdc, 205 - 128 + cx, 93 - 115 + cy, 218 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 212 - 128 + cx, 99 - 115 + cy, 225 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 219 - 128 + cx, 105 - 115 + cy, 225 - 128 + cx, 126 - 115 + cy);
    Rectangle(hdc, 212 - 128 + cx, 121 - 115 + cy, 218 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 205 - 128 + cx, 127 - 115 + cy, 211 - 128 + cx, 141 - 115 + cy);
    Rectangle(hdc, 198 - 128 + cx, 141 - 115 + cy, 204 - 128 + cx, 147 - 115 + cy);
    Rectangle(hdc, 85 - 128 + cx, 141 - 115 + cy, 92 - 128 + cx, 155 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 149 - 115 + cy, 99 - 128 + cx, 169 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 156 - 115 + cy, 106 - 128 + cx, 175 - 115 + cy);
    Rectangle(hdc, 106 - 128 + cx, 163 - 115 + cy, 113 - 128 + cx, 169 - 115 + cy);
    Rectangle(hdc, 113 - 128 + cx, 170 - 115 + cy, 120 - 128 + cx, 176 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 177 - 115 + cy, 127 - 128 + cx, 183 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 113 - 115 + cy, 162 - 128 + cx, 119 - 115 + cy);
    DeleteObject(fartukp);
    DeleteObject(fartukb);

    HPEN fartukdp = CreatePen(PS_SOLID, 2, RGB(79, 84, 78));
    HBRUSH fartukdb = CreateSolidBrush(RGB(79, 84, 78));
    SelectObject(hdc, fartukdp);
    SelectObject(hdc, fartukdb);
    Rectangle(hdc, 85 - 128 + cx, 120 - 115 + cy, 91 - 128 + cx, 141 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 135 - 115 + cy, 98 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 142 - 115 + cy, 112 - 128 + cx, 155 - 115 + cy);
    Rectangle(hdc, 107 - 128 + cx, 149 - 115 + cy, 155 - 128 + cx, 162 - 115 + cy);
    Rectangle(hdc, 107 - 128 + cx, 149 - 115 + cy, 155 - 128 + cx, 162 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 149 - 115 + cy, 162 - 128 + cx, 155 - 115 + cy);
    Rectangle(hdc, 114 - 128 + cx, 162 - 115 + cy, 127 - 128 + cx, 169 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 163 - 115 + cy, 141 - 128 + cx, 190 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 170 - 115 + cy, 134 - 128 + cx, 176 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 162 - 115 + cy, 155 - 128 + cx, 175 - 115 + cy);
    DeleteObject(fartukdp);
    DeleteObject(fartukdb);

    HPEN portkip = CreatePen(PS_SOLID, 2, RGB(23, 53, 41));
    HBRUSH portkib = CreateSolidBrush(RGB(23, 53, 41));
    SelectObject(hdc, portkip);
    SelectObject(hdc, portkib);
    Rectangle(hdc, 72 - 128 + cx, 120 - 115 + cy, 84 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 65 - 128 + cx, 149 - 115 + cy, 79 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 58 - 128 + cx, 177 - 115 + cy, 98 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 51 - 128 + cx, 184 - 115 + cy, 57 - 128 + cx, 190 - 115 + cy);
    Rectangle(hdc, 78 - 128 + cx, 156 - 115 + cy, 91 - 128 + cx, 204 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 170 - 115 + cy, 98 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 184 - 115 + cy, 183 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 156 - 115 + cy, 169 - 128 + cx, 204 - 115 + cy);
    Rectangle(hdc, 162 - 128 + cx, 149 - 115 + cy, 169 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 163 - 115 + cy, 183 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 156 - 115 + cy, 176 - 128 + cx, 197 - 115 + cy);
    Rectangle(hdc, 190 - 128 + cx, 58 - 115 + cy, 197 - 128 + cx, 140 - 115 + cy);
    Rectangle(hdc, 198 - 128 + cx, 72 - 115 + cy, 204 - 128 + cx, 141 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 85 - 115 + cy, 204 - 128 + cx, 98 - 115 + cy);
    Rectangle(hdc, 205 - 128 + cx, 79 - 115 + cy, 211 - 128 + cx, 92 - 115 + cy);
    Rectangle(hdc, 184 - 128 + cx, 99 - 115 + cy, 190 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 205 - 128 + cx, 99 - 115 + cy, 211 - 128 + cx, 127 - 115 + cy);
    Rectangle(hdc, 212 - 128 + cx, 114 - 115 + cy, 218 - 128 + cx, 120 - 115 + cy);
    Rectangle(hdc, 205 - 128 + cx, 141 - 115 + cy, 211 - 128 + cx, 147 - 115 + cy);
    Rectangle(hdc, 212 - 128 + cx, 134 - 115 + cy, 218 - 128 + cx, 140 - 115 + cy);
    Rectangle(hdc, 58 - 128 + cx, 37 - 115 + cy, 70 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 50 - 128 + cx, 44 - 115 + cy, 63 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 51 - 128 + cx, 184 - 115 + cy, 57 - 128 + cx, 190 - 115 + cy);
    Rectangle(hdc, 64 - 128 + cx, 71 - 115 + cy, 70 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 43 - 128 + cx, 65 - 115 + cy, 50 - 128 + cx, 92 - 115 + cy);
    Rectangle(hdc, 57 - 128 + cx, 99 - 115 + cy, 63 - 128 + cx, 105 - 115 + cy);
    DeleteObject(portkip);
    DeleteObject(portkib);

    HPEN bloodp = CreatePen(PS_SOLID, 2, RGB(132, 13, 7));
    HBRUSH bloodb = CreateSolidBrush(RGB(132, 13, 7));
    SelectObject(hdc, bloodp);
    SelectObject(hdc, bloodb);

    Rectangle(hdc, 113 - 128 + cx, 71 - 115 + cy, 120 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 106 - 128 + cx, 85 - 115 + cy, 113 - 128 + cx, 92 - 115 + cy);
    Rectangle(hdc, 120 - 128 + cx, 85 - 115 + cy, 134 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 99 - 115 + cy, 141 - 128 + cx, 106 - 115 + cy);
    Rectangle(hdc, 141 - 128 + cx, 106 - 115 + cy, 148 - 128 + cx, 113 - 115 + cy);
    Rectangle(hdc, 106 - 128 + cx, 99 - 115 + cy, 127 - 128 + cx, 127 - 115 + cy);
    Rectangle(hdc, 92 - 128 + cx, 114 - 115 + cy, 134 - 128 + cx, 120 - 115 + cy);
    Rectangle(hdc, 99 - 128 + cx, 121 - 115 + cy, 120 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 120 - 115 + cy, 148 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 141 - 128 + cx, 134 - 115 + cy, 148 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 134 - 128 + cx, 142 - 115 + cy, 148 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 85 - 115 + cy, 169 - 128 + cx, 141 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 99 - 115 + cy, 176 - 128 + cx, 106 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 135 - 115 + cy, 176 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 155 - 128 + cx, 120 - 115 + cy, 162 - 128 + cx, 148 - 115 + cy);
    Rectangle(hdc, 177 - 128 + cx, 149 - 115 + cy, 183 - 128 + cx, 155 - 115 + cy);
    Rectangle(hdc, 184 - 128 + cx, 156 - 115 + cy, 190 - 128 + cx, 161 - 115 + cy);
    Rectangle(hdc, 142 - 128 + cx, 163 - 115 + cy, 148 - 128 + cx, 190 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 176 - 115 + cy, 155 - 128 + cx, 183 - 115 + cy);
    Rectangle(hdc, 128 - 128 + cx, 163 - 115 + cy, 134 - 128 + cx, 169 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 170 - 115 + cy, 127 - 128 + cx, 176 - 115 + cy);
    Rectangle(hdc, 127 - 128 + cx, 177 - 115 + cy, 134 - 128 + cx, 183 - 115 + cy);
    Rectangle(hdc, 50 - 128 + cx, 99 - 115 + cy, 56 - 128 + cx, 127 - 115 + cy);
    Rectangle(hdc, 57 - 128 + cx, 106 - 115 + cy, 63 - 128 + cx, 126 - 115 + cy);
    Rectangle(hdc, 43 - 128 + cx, 113 - 115 + cy, 50 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 29 - 128 + cx, 114 - 115 + cy, 35 - 128 + cx, 133 - 115 + cy);
    Rectangle(hdc, 43 - 128 + cx, 113 - 115 + cy, 50 - 128 + cx, 134 - 115 + cy);
    Rectangle(hdc, 36 - 128 + cx, 120 - 115 + cy, 43 - 128 + cx, 140 - 115 + cy);
    Rectangle(hdc, 29 - 128 + cx, 114 - 115 + cy, 35 - 128 + cx, 133 - 115 + cy);
    Rectangle(hdc, 22 - 128 + cx, 64 - 115 + cy, 28 - 128 + cx, 71 - 115 + cy);
    Rectangle(hdc, 29 - 128 + cx, 58 - 115 + cy, 35 - 128 + cx, 64 - 115 + cy);
    Rectangle(hdc, 15 - 128 + cx, 44 - 115 + cy, 21 - 128 + cx, 57 - 115 + cy);
    Rectangle(hdc, 21 - 128 + cx, 51 - 115 + cy, 28 - 128 + cx, 57 - 115 + cy);
    Rectangle(hdc, 8 - 128 + cx, 57 - 115 + cy, 14 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 1 - 128 + cx, 65 - 115 + cy, 7 - 128 + cx, 71 - 115 + cy);
    Rectangle(hdc, 1 - 128 + cx, 78 - 115 + cy, 7 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 8 - 128 + cx, 85 - 115 + cy, 14 - 128 + cx, 92 - 115 + cy);
    DeleteObject(bloodp);
    DeleteObject(bloodb);


    HPEN hookp = CreatePen(PS_SOLID, 2, RGB(62, 59, 66));
    HBRUSH hookb = CreateSolidBrush(RGB(62, 59, 66));
    SelectObject(hdc, hookp);
    SelectObject(hdc, hookb);
    Rectangle(hdc, 8 - 128 + cx, 51 - 115 + cy, 14 - 128 + cx, 56 - 115 + cy);
    Rectangle(hdc, 15 - 128 + cx, 58 - 115 + cy, 28 - 128 + cx, 63 - 115 + cy);
    Rectangle(hdc, 29 - 128 + cx, 65 - 115 + cy, 35 - 128 + cx, 91 - 115 + cy);
    Rectangle(hdc, 22 - 128 + cx, 72 - 115 + cy, 42 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 36 - 128 + cx, 72 - 115 + cy, 43 - 128 + cx, 119 - 115 + cy);
    Rectangle(hdc, 43 - 128 + cx, 92 - 115 + cy, 49 - 128 + cx, 112 - 115 + cy);
    Rectangle(hdc, 51 - 128 + cx, 128 - 115 + cy, 56 - 128 + cx, 140 - 115 + cy);
    Rectangle(hdc, 44 - 128 + cx, 135 - 115 + cy, 56 - 128 + cx, 140 - 115 + cy);
    Rectangle(hdc, 22 - 128 + cx, 99 - 115 + cy, 28 - 128 + cx, 105 - 115 + cy);
    Rectangle(hdc, 8 - 128 + cx, 93 - 115 + cy, 21 - 128 + cx, 99 - 115 + cy);
    Rectangle(hdc, 1 - 128 + cx, 85 - 115 + cy, 7 - 128 + cx, 91 - 115 + cy);
    Rectangle(hdc, 8 - 128 + cx, 64 - 115 + cy, 14 - 128 + cx, 84 - 115 + cy);
    Rectangle(hdc, 1 - 128 + cx, 72 - 115 + cy, 7 - 128 + cx, 77 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 8 - 115 + cy, 161 - 128 + cx, 14 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 15 - 115 + cy, 155 - 128 + cx, 21 - 115 + cy);
    Rectangle(hdc, 156 - 128 + cx, 22 - 115 + cy, 162 - 128 + cx, 28 - 115 + cy);
    Rectangle(hdc, 163 - 128 + cx, 15 - 115 + cy, 168 - 128 + cx, 21 - 115 + cy);
    Rectangle(hdc, 170 - 128 + cx, 22 - 115 + cy, 176 - 128 + cx, 28 - 115 + cy);
    DeleteObject(hookp);
    DeleteObject(hookb);

    HPEN greenp = CreatePen(PS_SOLID, 2, RGB(52, 81, 50));
    HBRUSH greenb = CreateSolidBrush(RGB(52, 81, 50));
    SelectObject(hdc, greenp);
    SelectObject(hdc, greenb);
    Rectangle(hdc, 113 - 128 + cx, 22 - 115 + cy, 120 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 121 - 128 + cx, 15 - 115 + cy, 127 - 128 + cx, 21 - 115 + cy);
    Rectangle(hdc, 127 - 128 + cx, 8 - 115 + cy, 147 - 128 + cx, 14 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 1 - 115 + cy, 140 - 128 + cx, 14 - 115 + cy);
    DeleteObject(greenp);
    DeleteObject(greenb);



    HPEN eyep = CreatePen(PS_SOLID, 2, RGB(162, 179, 197));
    HBRUSH eyeb = CreateSolidBrush(RGB(162, 179, 197));
    SelectObject(hdc, eyep);
    SelectObject(hdc, eyeb);
    Rectangle(hdc, 128 - 128 + cx, 29 - 115 + cy, 134 - 128 + cx, 35 - 115 + cy);
    Rectangle(hdc, 149 - 128 + cx, 29 - 115 + cy, 155 - 128 + cx, 35 - 115 + cy);
    DeleteObject(eyep);
    DeleteObject(eyeb);

    HPEN pinkkp = CreatePen(PS_SOLID, 2, RGB(165, 112, 138));
    HBRUSH pinkkb = CreateSolidBrush(RGB(165, 112, 138));
    SelectObject(hdc, pinkkp);
    SelectObject(hdc, pinkkb);
    Rectangle(hdc, 113 - 128 + cx, 36 - 115 + cy, 120 - 128 + cx, 49 - 115 + cy);
    Rectangle(hdc, 135 - 128 + cx, 36 - 115 + cy, 148 - 128 + cx, 42 - 115 + cy);
    DeleteObject(pinkkp);
    DeleteObject(pinkkb);

    HPEN zubp = CreatePen(PS_SOLID, 2, RGB(225, 223, 202));
    HBRUSH zubb = CreateSolidBrush(RGB(225, 223, 202));
    SelectObject(hdc, zubp);
    SelectObject(hdc, zubb);
    Rectangle(hdc, 128 - 128 + cx, 50 - 115 + cy, 155 - 128 + cx, 56 - 115 + cy);
    DeleteObject(zubp);
    DeleteObject(zubb);

    HPEN gubap = CreatePen(PS_SOLID, 2, RGB(86, 52, 68));
    HBRUSH gubab = CreateSolidBrush(RGB(86, 52, 68));
    SelectObject(hdc, gubap);
    SelectObject(hdc, gubab);
    Rectangle(hdc, 128 - 128 + cx, 57 - 115 + cy, 155 - 128 + cx, 63 - 115 + cy);
    DeleteObject(gubap);
    DeleteObject(gubab);

}

void chain(HDC hdc, int cx, int cy) {

    HPEN cepp = CreatePen(PS_SOLID, 2, RGB(62, 59, 66));
    HBRUSH cepb = CreateSolidBrush(RGB(62, 59, 66));
    SelectObject(hdc, cepp);
    SelectObject(hdc, cepb);
    Rectangle(hdc, 245 - 266 + cx, 126 - 127 + cy, 261 - 266 + cx, 128 - 127 + cy);
    Rectangle(hdc, 256 - 266 + cx, 121 - 127 + cy, 277 - 266 + cx, 123 - 127 + cy);
    Rectangle(hdc, 256 - 266 + cx, 121 - 127 + cy, 258 - 266 + cx, 133 - 127 + cy);
    Rectangle(hdc, 256 - 266 + cx, 131 - 127 + cy, 277 - 266 + cx, 133 - 127 + cy);
    Rectangle(hdc, 275 - 266 + cx, 121 - 127 + cy, 277 - 266 + cx, 133 - 127 + cy);
    Rectangle(hdc, 272 - 266 + cx, 126 - 127 + cy, 288 - 266 + cx, 128 - 127 + cy);
    DeleteObject(cepp);
    DeleteObject(cepb);
}
void hook(HDC hdc, int cx, int cy) {


    HPEN hookp = CreatePen(PS_SOLID, 2, RGB(62, 59, 66));
    HBRUSH hookb = CreateSolidBrush(RGB(62, 59, 66));
    SelectObject(hdc, hookp);
    SelectObject(hdc, hookb);
    Rectangle(hdc, 287 - 287 + cx, 82 - 87 + cy, 299 - 287 + cx, 94 - 87 + cy);
    Rectangle(hdc, 300 - 287 + cx, 87 - 87 + cy, 313 - 287 + cx, 94 - 87 + cy);
    Rectangle(hdc, 308 - 287 + cx, 89 - 87 + cy, 337 - 287 + cx, 102 - 87 + cy);
    Rectangle(hdc, 335 - 287 + cx, 96 - 87 + cy, 355 - 287 + cx, 109 - 87 + cy);
    Rectangle(hdc, 350 - 287 + cx, 103 - 87 + cy, 369 - 287 + cx, 116 - 87 + cy);
    Rectangle(hdc, 364 - 287 + cx, 110 - 87 + cy, 376 - 287 + cx, 130 - 87 + cy);
    Rectangle(hdc, 335 - 287 + cx, 124 - 87 + cy, 363 - 287 + cx, 137 - 87 + cy);
    Rectangle(hdc, 328 - 287 + cx, 117 - 87 + cy, 334 - 287 + cx, 130 - 87 + cy);
    Rectangle(hdc, 322 - 287 + cx, 110 - 87 + cy, 328 - 287 + cx, 116 - 87 + cy);
    DeleteObject(hookp);
    DeleteObject(hookb);

    HPEN hookbloodp = CreatePen(PS_SOLID, 2, RGB(132, 8, 10));
    HBRUSH hookbloodb = CreateSolidBrush(RGB(132, 8, 10));
    SelectObject(hdc, hookbloodp);
    SelectObject(hdc, hookbloodb);
    Rectangle(hdc, 363 - 287 + cx, 103 - 87 + cy, 369 - 287 + cx, 109 - 87 + cy);
    Rectangle(hdc, 356 - 287 + cx, 110 - 87 + cy, 363 - 287 + cx, 116 - 87 + cy);
    Rectangle(hdc, 370 - 287 + cx, 110 - 87 + cy, 376 - 287 + cx, 123 - 87 + cy);
    Rectangle(hdc, 376 - 287 + cx, 117 - 87 + cy, 383 - 287 + cx, 123 - 87 + cy);
    Rectangle(hdc, 364 - 287 + cx, 124 - 87 + cy, 370 - 287 + cx, 130 - 87 + cy);
    Rectangle(hdc, 356 - 287 + cx, 131 - 87 + cy, 363 - 287 + cx, 137 - 87 + cy);
    Rectangle(hdc, 343 - 287 + cx, 131 - 87 + cy, 349 - 287 + cx, 137 - 87 + cy);
    Rectangle(hdc, 335 - 287 + cx, 124 - 87 + cy, 342 - 287 + cx, 130 - 87 + cy);
    DeleteObject(hookbloodp);
    DeleteObject(hookbloodb);



}