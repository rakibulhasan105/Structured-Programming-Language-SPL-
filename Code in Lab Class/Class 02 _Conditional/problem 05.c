#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number<0)
        printf("Negative input is not valid");
    else if(number > 0 )
    {
        if ((number &(number -1)) == 0)
        {
            printf("The number is a power of 2.\n");
        }
        else
        {
            printf("The number is not a power of 2.\n");
        }
    }
    else
        printf("Zero is not a valid input");
    return 0;
}

