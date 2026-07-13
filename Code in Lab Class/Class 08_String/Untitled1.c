#include<stdio.h>
int main(){
 char str[100];
 printf("Enter the string: ");
 //scanf("%s", str);
 //scanf("%[^\n]",str);
 gets(str);
 //printf("The string is: %s\n",str);
 puts(str);
 return 0;
}


