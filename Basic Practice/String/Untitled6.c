// string copy function
#include<stdio.h>
int  main ()
{
    char str[]="Maisha Masud is my love";
    char str1[30];
    strcpy(str1,str);   // string copy function,, second to first
    printf("%s\n",str);
    printf("%s",str1);
    return 0;
}
