#include<stdio.h>
void reples(char str1[],int  x,char ch)
{
    int i=0,sum=0;
    while(str1[i]!='\0')
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' ||
                str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' )
        {
            str1[i]=ch;
        }
        i++;
    }
    printf("%s",str1);
}
int main ()
{
    char str[100];
    char c;
    int i=0,len=0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c",&c);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    reples(str,len,c);
}
