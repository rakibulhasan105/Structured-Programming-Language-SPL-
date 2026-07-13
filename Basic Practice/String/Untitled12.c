// string revers
#include<stdio.h>
int  main ()
{
    char str1[50]="Maisha Masud is my love";
    char str2[50];

    //fflush(stdin)

    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}

