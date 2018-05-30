#include "hienthimanhinh.h"
extern int diem;
extern int gia_tri[4][4];
void hienthimanhinh()
{
    char c=219;
    if(diem>diemcaonhat())
    {
        luudiemcaonhat(diem);
    }
    gotoXY(59,13);
    TextColor(11);
    cout<<"diem cao nhat: "<<diemcaonhat();
    gotoXY(59,5);
    TextColor(15);
    cout<<"Huong dan dieu khien : ";
    gotoXY(59,7);
    TextColor(10);
    cout<<"-An mui ten len tren de di chuyen len tren.";
    gotoXY(59,8);
    TextColor(10);
    cout<<"-An mui ten xung duoi de di chuyen xuong duoi.";
    gotoXY(59,9);
    TextColor(10);
    cout<<"-An mui ten sang trai de di chuyen sang trai.";
    gotoXY(59,10);
    TextColor(10);
    cout<<"-An mui ten sang phai de di chuyen sang phai.";
    gotoXY(59,11);
    TextColor(13);
    cout<<"-An phim r de choi lai va phim x de thoat.";
    gotoXY(1,1);
    TextColor(14);
    cout<<"    222222"<<endl;
    cout<<"  22     222"<<endl;
    cout<<"  22      22"<<endl;
    cout<<"         22  0000"<<endl;
    cout<<"       222  00  00"<<endl;
    cout<<"      222   00  00  888"<<endl;
    cout<<"    222      0000  8  88"<<endl;
    cout<<"   222  444         888"<<endl;
    cout<<" 222   4  4        8  88"<<endl;
    cout<<"222   4444444       888"<<endl;
    cout<<"222       4"<<endl;
    cout<<"22222222222222"<<endl;
    cout<<"222222222222222"<<endl;
    for (int i=33;i<=52;i+=6)
    {
        for(int j=3;j<=15;j+=4)
        {
            TextColor(3);
            gotoXY(i,j);
            cout<<c<<c<<c<<c;
            dat_mau(gia_tri[(j-3)/4][(i-33)/6]);
            if (gia_tri[(j-3)/4][(i-33)/6]==0)
            {
                TextColor(3);
                gotoXY(i,j);
                cout<<c<<c<<c<<c;
            }
            else if(gia_tri[(j-3)/4][(i-33)/6]<100)
            {
                gotoXY(i+1,j);
                cout<<gia_tri[(j-3)/4][(i-33)/6];
            }
            else
            {
                gotoXY(i,j);
                cout<<gia_tri[(j-3)/4][(i-33)/6];
            }
        }
    }
    gotoXY(59,14);
    TextColor(11);
    cout<<"Diem ban dat duoc : ";
    TextColor(12);
    cout<<diem;
}

