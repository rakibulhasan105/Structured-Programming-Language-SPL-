#include <stdio.h>

int main()
{
    // a) Assign (LAST_TWO_DIGITS_OF_MY_STUDENT_ID % 21) + 5 to integer variable b.
    int last_two_digits = 32;
    int b = (last_two_digits % 21) + 5;

    // b) Declare a one-dimensional integer array A of size 10.
    int A[10];

    // c) Initialize the array values with a%7 + 3*i, where a = LAST_4_DIGITS_OF_MY_STUDENT_ID and i = array index.
    int last_three_digits = 532;
    for (int i = 0; i < 10; i++)
    {
        A[i] = (last_three_digits % 7) + 3 * i;
    }

    // d) Find the sum of the numbers that are stored in even numbered indices in the array.
    int sum = 0;
    for (int i = 0; i < 10; i ++)
    {
        if(i%2==0)
        {
            sum += A[i];
        }
    }

    // Print the results
    printf("Value of b: %d\n", b);
    printf("Array A: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nSum of even indexed elements: %d\n", sum);

    return 0;
}
