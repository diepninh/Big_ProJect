#include "taoso.h"
extern int gia_tri[4][4];

bool vitritrong()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(gia_tri[i][j]==0)
                return true;
        }
    }
    return false;
}

void taosongaunhien()
{
    if(vitritrong()==false)
        return;
    int x,y;
    do
    {
        x=rand()%4;
        y=rand()%4;
    }
    while(gia_tri[x][y]!=0);
    int s=rand()%100;
    if(s>49)
        gia_tri[x][y]=4;
    else
        gia_tri[x][y]=2;
}
