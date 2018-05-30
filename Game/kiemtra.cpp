#include"kiemtra.h"
extern int gia_tri[4][4];

int kiemtrabang[4][4];

void batdaukiemtra()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            kiemtrabang[i][j]=gia_tri[i][j];
    }
}

bool kiemtradichuyen()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(kiemtrabang[i][j]!=gia_tri[i][j])
                return true;
        }
    }
    return false;
}

bool ketthuctrochoi()
{
    if(vitritrong()==false)
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(gia_tri[i][j]==gia_tri[i][j+1]||gia_tri[i][j]==gia_tri[i+1][j])
                    return false;
            }
        }
    }
    else if(vitritrong()==true)
        return false;
    return true;
}
