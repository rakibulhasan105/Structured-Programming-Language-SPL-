// string swapp
#include<stdio.h>
int  main ()
{
    char str1[20]="Maisha Masud";
    char str2[20]="Muntaha Mim";
    char temp[20];

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("%s\n",str1);
    printf("%s\n",str2);

    return 0;
}


