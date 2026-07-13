// string compare
#include<stdio.h>
int  main ()
{
    char str1[]="Maisha Masud is my love";
    char str2[]="Maisha Masud is my love";
    //char str2[]="Maisha Masud is my heart";

    int d=strcmp(str1,str2);
    if(d==0)
    {
        printf("strings are equal\n");
    }
    else
        printf("strings are not equal\n");
    return 0;
}

