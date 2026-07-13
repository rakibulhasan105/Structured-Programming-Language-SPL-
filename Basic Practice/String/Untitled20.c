#include<stdio.h>
int main ()
{
    char str[100];
    printf("Enter the number: ");
    scanf("%s",&str);
    getc(str);
    printf("%s",str);
}

