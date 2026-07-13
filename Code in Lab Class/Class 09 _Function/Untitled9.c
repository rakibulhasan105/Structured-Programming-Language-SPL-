#include<stdio.h>
#include<string.h>
int find_sub_string(char s1[], char s2[]){
    int i, j;
    int len_s1=strlen(s1);
    int len_s2=strlen(s2);

    for(i=0;i<=len_s1-len_s2; i++){
        for(j=0;j<len_s2;j++){
            if(s1[i+j]!=s2[j]){
                break;
            }
        }
        if (j == len_s2) {
            return 1;
        }
    }
    return -1;

}
int main(){
    char a[100], b[100];
    printf("Enter first string: ");
    scanf("%[^\n]", a);
    printf("Enter second string: ");
    scanf(" %[^\n]", b);

    int result = find_sub_string(a, b);
    if (result == 1) {
        printf("String b is found in string a.\n");
    } else {
        printf("String b is not found in string a.\n");
    }

    return 0;
}

