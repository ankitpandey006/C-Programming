#include<stdio.h>
int main()
{
   int i,j,x[10][10],y[10][10],z[10][10],row,colomn;
   printf("\n enter row ");
   scanf("%d",&row);
   printf("\n enter colomn");
   scanf("%d",&colomn);
        printf("\n enter 1st matrix ");
   for(i=0;i<row;i++)
   {
     for(j=0;j<colomn;j++)
     {
        scanf("%d",&x[i][j]);
     }
   }
        printf("\n enter 2nd matrix ");
   for(i=0;i<row;i++)
   {
     for(j=0;j<colomn;j++)
     {
        scanf("%d",&y[i][j]);
     }
   }
    
   for(i=0;i<row;i++)
   {
     for(j=0;j<colomn;j++)
     {
       z[i][j] = x[i][j] + y[i][j];
     }
   }
      printf("\n Addition of two matrix");
   for(i=0;i<row;i++)
   {
     for(j=0;j<colomn;j++)
     {
       printf("  %d  ",z[i][j]);
     }
     printf("\n");
   }
    return 0;
}
