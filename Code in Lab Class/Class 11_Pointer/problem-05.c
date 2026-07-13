#include<stdio.h>
int main(){
    int length=0;
    char str[100], *ptr;

    printf("Enter the string: ");
    scanf("%[^\n]",str);

    ptr=str;
    while(*ptr!='\0'){
       length++;
       ptr++;
    }
    printf("Length of the string is: %d",length);

    return 0;
}