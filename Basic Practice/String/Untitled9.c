// string connection in one line
#include<stdio.h>
int  main ()
{
    char str1[50]="Maisha Masud ";
    char str2[]="is my love";
    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("%s\n",str1);
     printf("%s",str2);
    return 0;
}

