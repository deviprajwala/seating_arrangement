#include <stdio.h>
void check(int a[6][8],int x);
int main()
{
	int i,j,x,y,k,a[6][8],p=0,m,n,count=1,x1,x2;
        long int c[48]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48};
	
	label1:
	{
            j=count;
	    for(i=6;i>0;i--)
	    {
	        a[i][j]=c[p];
                p=p+1;
                if(p>=48)goto label3;

	    }
            count+=1;
	    if(i==6)goto label2;
	}
	label2:
	{
            y=count;
	    for(x=1;x<=6;x++)
	    {
	        a[x][y]=c[p];
	        p=p+1;
                if(p>=48)goto label3;
	    }
            count+=1;
	    if(x>=7)goto label1;
	}
   label3:
       for(m=1;m<=6;m++)
       {
          for(n=1;n<=8;n++)
          {
            printf("%d\t",a[m][n]);
          }
          printf("\n");
       }
printf("Enter two seat numbers\n");
scanf("%d %d",&x1,&x2);
check(a[6][8], x1);
check(a[6][8], x2);

return 0;
}
void check(int a[6][8],int x)
{
int i,j,k;
for(k=0;k<2;k++)
 {
   for(i=1;i<=8;i++)
   {
    for(j=1;j<=6;j++)
    {
      if(a[i][j]==x)
      {
       printf("%d",a[i][j+1]);
      }
    }
   }
 }
}  
