#include<stdio.h>
int hcf(int n, int m)
{
   
  if(n == 0)
  {
    return m;
  }
  else if ( m == 0)
  {
    return n;
  }
  else
  {
    return hcf(m,n%m);
  }

}
int lcm(int j , int k)
{
    return  (j * k) / hcf(j,k);

}
int main()
{
 int x,y;
 printf("Enter two numbers: ");
 scanf("%d%d",&x,&y);
 printf("HCF of two number is %d\n",hcf(x,y));
 printf("LCM of two number is %d",lcm(x,y));
}