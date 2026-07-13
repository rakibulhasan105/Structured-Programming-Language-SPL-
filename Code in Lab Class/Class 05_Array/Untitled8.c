#include <stdio.h>
int main() {
    int size, vowelsNum = 0;

    printf("Enter the size: ");
    scanf("%d", &size);
    char alphabets[size];

    printf("Enter alphabets: ");
    scanf("%s", alphabets);
    for (int i = 0; i < size; i++) {
        if (alphabets[i] == 'A' || alphabets[i] == 'E' || alphabets[i] == 'I' || alphabets[i] == 'O' || alphabets[i] == 'U' ||
            alphabets[i] == 'a' || alphabets[i] == 'e' || alphabets[i] == 'i' || alphabets[i] == 'o' || alphabets[i] == 'u') {
            vowelsNum++;
        }
    }

    printf("Number of vowel: %d\n", vowelsNum);

    return 0;
}
