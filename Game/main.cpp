#include "console.h"
#include "gioithieu.h"
#include "bangbandau.h"
#include "dichuyen.h"
#include "datmauso.h"
#include "luudiem.h"
#include "hienthimanhinh.h"
#include "taoso.h"
#include "kiemtra.h"

bool choilai=false;

int main()
{
    gioi_thieu();
    taogiatribandau();

    while(true)
    {
        if(choilai==true)
        {
            taogiatribandau();
            choilai=false;
        }
        showCur(false);
        hienthimanhinh();

        if(ketthuctrochoi()==true)
        {
            gotoXY(5,19);
            cout<<"  gggggg       aaa      mmm     mmm eeeeeee      ooooo vv           vveeeeeeerrrrrr"<<endl;
            gotoXY(5,20);
            cout<<" gg    gg     aa aa     mmmm   mmmm ee          oo   oo vv         vv ee     rr   rr"<<endl;
            gotoXY(5,21);
            cout<<" gg  gggg    aa   aa    mm mm mm mm eeeeeee     oo   oo  vv       vv  eeeeeeerr   rr"<<endl;
            gotoXY(5,22);
            cout<<" gg         aaaaaaaaa   mm  mmm  mm eeeeeee     oo   oo   vv     vv   eeeeeeerrrrrr"<<endl;
            gotoXY(5,23);
            cout<<" gg  gggg  aa       aa  mm       mm ee          oo   oo    vv   vv    ee     rr rr"<<endl;
            gotoXY(5,24);
            cout<<" gg    gg aa         aa mm       mm ee          oo   oo     vv vv     ee     rr  rr"<<endl;
            gotoXY(5,25);
            cout<<"  gggggg aa           aamm       mm eeeeeee      ooooo       vvv      eeeeeeerr   rrr"<<endl;

        }
        char key=_getch();
        batdaukiemtra();
//tudichuyen();
//Sleep(500);
        if(key==72)
        {
            dichuyenlen();
        }
        else if(key==80)
        {
            dichuyenxuong();
        }
        else if(key==75)
        {
            dichuyensangtrai();
        }
        else if(key==77)
        {
            dichuyensangphai();
        }
        else if(key=='r'||key=='R')
        {
            choilai=true;
        }
        else if(key=='x'||key=='X')
        {
            exit(true);
        }
        else continue;
        if(kiemtradichuyen()==false)
            continue;
        taosongaunhien();
    }
    _getch();
    return 0;
}

