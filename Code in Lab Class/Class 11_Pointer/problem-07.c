#include<stdio.h>
#include<ctype.h>
int main(){
    int vowel=0, consonant=0;
    char str[100], *ptr, ch;

    printf("Enter the string: ");
    scanf("%[^\n]",str);
    ptr=str;

    while(*ptr!='\0'){

        ch=toupper(*ptr);
        if(ch>='A' && ch<='Z'){
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }
        ptr++;
    }
    printf("Number of vowels: %d\nNumber of consonants: %d\n",vowel,consonant );
    return 0;
}