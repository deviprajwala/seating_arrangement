#include <stdio.h>
void seat(int i);
int main()
{
	int i,j,d,x,y,k,a[6][8],p=0,m,n,count=1,e;
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
           if(m==3)
            {
             printf("\n\n");
            }
          printf("\n");
       }
e=1;
while(e!=0)
{
   printf("Enter the seat number:");
   scanf("%d",&d);
   for(i=1;i<=6;i++)
   {
    for(j=1;j<=8;j++)
    {
      if(a[i][j]==d)
      {
       if(j%2==0)
       {
       printf("The seat opposite to %d is %d\n",d,a[i][j-1]);
       seat(i);
       printf("Enter 1 to continue and 0 to exit\n");
       scanf("%d",&e);
       }
       else
       {
        printf("The seat opposite to %d is %d\n",d,a[i][j+1]);
        seat(i);
        printf("Enter 1 to continue and 0 to exit\n");
        scanf("%d",&e); 
       }
      }
    }
   }
} 
  
return 0;
}
void seat(int i)
{      
       if(i==1||i==6)
       {
       printf("Window seat\n");
       }
       else if(i==2||i==5)
       {
       printf("Middle seat\n");
       }
       else if(i==3||i==4)
       {
       printf("Asile seat\n");
       }
      
}
