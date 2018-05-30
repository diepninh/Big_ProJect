//#include "console.h"
#include"bangbandau.h"
#define chieu_rong_bang 54
#define chieu_cao_bang 16
int gia_tri[4][4]={0};
 int diem;
void ve_khung()
{
	char c=219;
    for(int i=30;i<=chieu_rong_bang;i++)
    {
        for(int j=0;j<=chieu_cao_bang;j++)
        {
        	if(j%4==0)
        	{
        		gotoXY(i+1,j+1);
        		TextColor(7);
        		cout<<c;
			}
			else if(i%6==0)
			{
				gotoXY(i+1,j+1);
				TextColor(7);
				cout<<c;
			}
			else
            {
                TextColor(3);
                gotoXY(i+1,j+1);

                cout<<c;
            }
		}
    }
}
void taogiatribandau()
{
   clrscr();
   ve_khung() ;
   diem=0;
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           gia_tri[i][j]=0;
       }
   }
   srand(time(NULL));
   int  vitri[4];
   vitri[0]=rand() % 4;
   vitri[1]=rand() % 4;
   do
   {
       vitri[2]=rand() %4;
       vitri[3]=rand() %4;
   }
   while(vitri[0]==vitri[2]||vitri[1]==vitri[3]);

   gia_tri[vitri[0]][vitri[1]] =2;
   gia_tri[vitri[2]][vitri[3]] =2;
//   gia_tri[vitri[0]][vitri[2]] =2;
//   gia_tri[vitri[1]][vitri[3]] =2;

}
