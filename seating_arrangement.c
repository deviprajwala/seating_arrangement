#include <stdio.h>

int main()
{
	int i,j,x,y,k,a[3][3],p=0,m,n,count=1;
        int c[25]={1,2,3,4,5,6,7,8,9};
	
	label1:
	{
            j=count;
	    for(i=3;i>0;i--)
	    {
	        a[i][j]=c[p];
                p=p+1;
                if(p>=9)goto label3;

	    }
            count+=1;
	    if(i==3)goto label2;
	}
	label2:
	{
            y=count;
	    for(x=1;x<=3;x++)
	    {
	        a[x][y]=c[p];
	        p=p+1;
                if(p>=9)goto label3;
	    }
            count+=1;
	    if(x>=4)goto label1;
	}
   label3:
       for(m=1;m<=3;m++)
       {
          for(n=1;n<=3;n++)
          {
            printf("%d\t",a[m][n]);
          }
          printf("\n");
       }
return 0;
}
  
