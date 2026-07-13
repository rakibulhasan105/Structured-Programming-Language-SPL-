#include<stdio.h>
int main(){
    int word=0, i=0;
    char str[100];
    printf("Enter the string: ");
    //scanf(" %[^\n]",str);
    gets(str);

    while(str[i]!='\0'){
        if(str[i]==' '){
            word++;
        }
        i++;
    }
    printf("Total word count: %d", word+1);
    return 0;
}

