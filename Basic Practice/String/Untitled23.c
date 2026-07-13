#include<stdio.h>
int main ()
{
    int i=0,temp=0;
    char str[100];
    printf("Enter the first string: ");
    scanf("%[^\n]",str);
    while(str[temp]!='\0')
    {
        temp++;
    }
    printf("revers: \n");
    for(i=temp-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}

