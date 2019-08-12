#include<stdio.h>

void main()
{
  int i,j,a[9]={1,2,3,4,5,6,7,8,9},b[3][3],k=0;
  
  print(b[3][3]);
}


void print(int b[i][j])
{
  for(i=1;i<=3;i++)
  {
   for(j=1;j<=3;j++)
   {
     printf("%d",b[i][j]);
    }
  }
}
void read(int i,int j)
{
//label1:
 for(j=1;j<=3;j+2)
  {
   for(i=3;i>0;i--)
   {
     b[i][j]=a[k];
     k+=1;
   }
  }
  for(j=2;j<=3;j+2)
  {
   for(i=1;i<=3;i++)
   {
     b[i][j]=a[k];
     k+=1;
   }
  }//goto label1;
}
