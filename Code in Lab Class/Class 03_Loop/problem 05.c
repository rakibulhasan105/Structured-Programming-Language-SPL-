#include<stdio.h>
int main()
{
    int num, digit=0, reverse =0;
    printf("Enter the number: ");
    scanf("%d",&num);

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
