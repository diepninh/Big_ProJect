#include"dichuyen.h"
extern int gia_tri[4][4];
extern int diem;


void dichuyenlen()
{
  for(int j=0;j<4;j++)
  {
      int k=0;
      for(int i=0;i<4;i++)
      {
          if(gia_tri[i][j]!=0)
          {
              gia_tri[k][j]=gia_tri[i][j];
              k++;
          }
      }
      for(int i=k;i<4;i++)
        gia_tri[i][j]=0;
  }

  for(int j=0;j<4;j++)
  {
      int k=0;
      for(int i=0;i<4;i++)
      {
          if(gia_tri !=0)
          {
              if(gia_tri[i][j]==gia_tri[i+1][j])
              {
                  gia_tri[k][j]=2* gia_tri[i][j];
                  diem +=gia_tri[k][j];
                  k++;
                  i++;
              }
              else
              {
                  gia_tri[k][j]=gia_tri[i][j];
                  k++;
              }
          }
      }
      for(int i=k;i<4;i++)
        gia_tri[i][j]=0;
  }

}

void dichuyenxuong()
{
    for(int j=0;j<4;j++)
    {
        int k=3;
        for(int i=3;i>=0;i--)
        {
            if(gia_tri[i][j]!=0)
            {
                gia_tri[k][j]=gia_tri[i][j];
                k--;
            }
        }
        for(int i=k;i>=0;i--)
            gia_tri[i][j]=0;
    }

    for(int j=0;j<4;j++)
    {
        int k=3;
        for(int i=3;i>=0;i--)
        {
            if(gia_tri !=0)
            {
                if(gia_tri[i][j]==gia_tri[i-1][j])
                {
                    gia_tri[k][j]= 2*gia_tri[i][j];
                    diem +=gia_tri[k][j];
                    k--;
                    i--;
                }
                else {gia_tri[k][j]=gia_tri[i][j];
                k--;}
            }
        }
        for(int i=k;i>=0;i--)
            gia_tri[i][j]=0;
    }
}
void dichuyensangtrai()
{
    for(int i=0;i<4;i++)
    {
        int k=0;
        for(int j=0;j<4;j++)
        {
            if(gia_tri[i][j]!=0)
            {
                gia_tri[i][k]=gia_tri[i][j];
                k++;
            }
        }
        for(int j=k;j<4;j++)
            gia_tri[i][j]=0;
    }

    for(int i=0;i<4;i++)
    {
        int k=0;
        for(int j=0;j<4;j++)
        {
            if(gia_tri [i][j]!=0)
            {
                if(gia_tri[i][j]==gia_tri[i][j+1])
                {
                    gia_tri[i][k]= 2*gia_tri[i][j];
                    diem+=gia_tri[i][k];
                    j++;
                    k++;

                }
                else
                {
                    gia_tri[i][k]=gia_tri[i][j];
                    k++;
                }
            }
        }
        for(int j=k;j<4;j++)
            gia_tri[i][j]=0;
    }
}
void dichuyensangphai()
{
    for(int i=0;i<4;i++)
    {
        int k=3;
        for(int j=3;j>=0;j--)
        {
            if(gia_tri[i][j]!=0)
            {
                gia_tri[i][k]=gia_tri[i][j];
                k--;
            }
        }
        for(int j=k;j>=0;j--)
            gia_tri[i][j]=0;
    }

    for(int i=0;i<4;i++)
    {
        int k=3;
        for(int j=3;j>=0;j--)
        {
            if(gia_tri[i][j]!=0)
            {
                if(gia_tri[i][j]==gia_tri[i][j-1])
                {
                    gia_tri[i][k]=2*gia_tri[i][j];
                    diem+=gia_tri[i][j];
                    j--;
                    k--;
                }
                else
                {
                    gia_tri[i][k]=gia_tri[i][j];
                    k--;
                }
            }
        }
        for(int j=k;j>=0;j--)
            gia_tri[i][j]=0;
    }
}
