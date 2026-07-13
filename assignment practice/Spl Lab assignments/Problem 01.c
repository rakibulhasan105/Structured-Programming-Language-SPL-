//pattern-nested loop
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            if (i==0|| i==num-1|| j==num-i-1)
            {
                printf("Z");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}






