#include<stdio.h>
void hello_world()
{
    printf("hello world \n");
    return;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        hello_world();
    }
    return 0;
}