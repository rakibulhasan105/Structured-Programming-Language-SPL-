#include<stdio.h>
 void display(char str1[])
 {
     int i=0;
     while(str1[i]!='\0')
     {
         printf("%c",str1[i]);
         i++;
     }
     printf("\n");
 }
int main()
{
    char str[]="Maisha masud is my first love";
    display(str);
}




