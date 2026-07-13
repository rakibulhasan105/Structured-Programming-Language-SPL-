#include<stdio.h>
int main()
{
    for (int k = 0; k <= 20; k += 2)
    {
        for (int l = k; l >= 0; l -= 2)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}
