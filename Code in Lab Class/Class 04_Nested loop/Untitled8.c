#include<stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++){
            //printf((i+j)%2==1? " 0":" 1");}
            ((i+j)%2==1)?printf(" 0"):printf(" 1");}
            printf("\n");

        /*{
                    if((i+j)%2==1)
                        printf(" 0");
                    else
                        printf(" 1");*/
    }
    printf("\n");

return 0;


}
