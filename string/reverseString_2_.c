#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    puts("Enter the String");
    gets(str);
    int j = 0;
    int len = 0;
    while (str[j] != '\0')
    {
        j++;
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
       str[i] = str[len - 1 -i ];
       str[len - 1 -i] = temp;
    }
    printf(" Reverse of the string is %s ");
    return 0;
}