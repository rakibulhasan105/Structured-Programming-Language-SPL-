#include<stdio.h>
int main ()
{
    int i=0,j=0;
    char str[100];
    printf("Enter the first string: ");
    scanf("%[^\n]",str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            j++;
        }
        i++;
    }
    printf("%d",j+1);
    return 0;
}


