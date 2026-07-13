#include<stdio.h>
int main ()
{
    char str[30];
    printf("Enter your full name: ");
    //scanf("%s",str);    //not work  / its for only one word
    gets(str);
    printf("My full name is : %s",str);

}
