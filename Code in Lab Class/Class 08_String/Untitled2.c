#include<stdio.h>
int main(){
    int length=0;
    char str[100];
    printf("Enter the input: ");
    scanf("%[^\n]",str);
    while (str[length] != '\0') {
        length++;
    }
    printf("The length of the string is: %d",length);
    return 0;
}
