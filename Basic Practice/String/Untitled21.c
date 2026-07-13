#include<stdio.h>
int main ()
{
    char str[100];
    printf("Enter the number: ");
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",(int)i);
}
