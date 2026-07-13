#include <stdio.h>
int main() {
    int i, length=0, isPalindrome = 1;
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]",str);

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

