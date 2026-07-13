//string connection in one line
#include<stdio.h>
#include<string.h>
int  main ()
{
    char str1[100]="Maisha Masud ";
    char str2[]="is my love";
    //strcat(str1,"is my love");
    strcat(str1,str2);
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}

