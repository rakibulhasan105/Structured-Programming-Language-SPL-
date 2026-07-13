#include<stdio.h>
int main(){
    int length=0, i=0;
    char str[100];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Reverse string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

