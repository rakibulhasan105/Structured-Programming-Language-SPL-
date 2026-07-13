#include<stdio.h>
int main ()
{
    int i=0,j=0,m=0,count1=0,count2=0;
    char str1[100],str2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]",str1);
    gets(str1);
    printf("Enter the second string: ");
    scanf("%[^\n]",str2);

    while(str1[i]!='\0')
    {
        if(str1[i]==' ')
        {
            j++;
        }
        if(str1[i]=='a')
        {
            count1++;
        }

        i++;
    }
    ;
    while(str2[i]!='\0')
    {
        if(str2[i]==' ')
        {
            m++;
        }
        if(str2[i]=='a')
        {
            count2++;
        }
        i++;
    }


    printf("total number of words: %d\n",m+j+2);
    printf("total a count: %d",count1+count2);




    return 0;
}

