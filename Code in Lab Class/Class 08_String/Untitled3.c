#include<stdio.h>
int main(){
    int i=0, j=0;
    char str1[100], str2[100];
    printf("Enter the first string: ");
    //scanf(" %[^\n]",str1);
   gets(str1);

    printf("Enter the second string: ");
    //scanf(" %[^\n]",str2);
    gets(str2);

    while (str1[i] != '\0') {  // Finding the end of the first string
        i++;
    }

    while (str2[j] != '\0') { // Copying from the second string to the end of the first string
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("The final output is: %s",str1);
    return 0;

}


