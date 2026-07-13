#include<stdio.h>
int main ()
{
    char str[]="Maisha Masud";
    int i=0;
    while(str[i]!='\0')
    {
       printf("%c\n",str[i]);
       i++;
    }
printf("\nfull name : %s\n",str);
return 0;
}

