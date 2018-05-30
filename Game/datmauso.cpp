#include "datmauso.h"


void dat_mau(int so)
{
    switch (so)
    {
        case 2:		TextColor(48); break;
        case 4:		TextColor(49); break;
        case 8:		TextColor(63); break;
        case 16:	TextColor(52); break;
        case 32:	TextColor(53); break;
        case 64:	TextColor(54); break;
        case 128:	TextColor(55); break;
        case 256:	TextColor(56); break;
        case 512:	TextColor(57); break;
        case 1024:  TextColor(58); break;
        case 2048:  TextColor(59); break;
        case 4096:  TextColor(60); break;
        case 8192:  TextColor(61); break;
        case 16384: TextColor(62); break;
    }
}
