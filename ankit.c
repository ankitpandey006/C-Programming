#include<stdio.h>
int main(){
    int x[10][10],y[10][10],z[10][10],i,j,row,column;
    printf("\n enter row = ");
    scanf("%d",&row);
    printf("\n enter column = ");      ` 
    scanf("%d",&column);
       printf("\n enter 1st matrix = ");
         for(i=0; i<row; i++)
         {
            for(j=0; j<column; j++)
            {
                scanf("%d",&x[i][j]);
            }
         }
              printf("\n enter 2nd matrix = ");
         for(i=0; i<row; i++)
         {
            for(j=0; j<column; j++)
            {
                scanf("%d",&y[i][j]);
            }
         }
             for(i=0; i<row; i++)
         {
            for(j=0; j<column; j++)
            {
                z[i][j] = x[i][j] + y[i][j];
            }
         }
         printf("\n addition of two matrix is ");
             for(i=0; i<row; i++)
         {
            for(j=0; j<column; j++)
            {
                printf("  %d  ",z[i][j]);
            }
            printf("\n");
         }
    return 0;
}