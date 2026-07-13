// string length
#include<stdio.h>
int main ()
{
    char str[]="Maisha Masud is my love";

    int i=0;
    int len=0;

    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d\n",i);
    printf("%d",len);


}
