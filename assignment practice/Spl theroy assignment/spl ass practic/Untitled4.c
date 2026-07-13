#include <stdio.h>

int main() {
    int num;
    int sum = 0, i = 1, j = 3;
    scanf("%d", &num);

    if(num==1)
    {
        sum += (i + j);
        i++;
        sum += j - 2;
        j++;
    }
    else if(num==2)
    {
        sum += j - 2;
        j++;
    }
    else if(num==3)
    {
        sum = (i + j) * i;
        i++;
        j--;
    sum -= (i + j);
        j--;
    }
    else if(num==4)
    {
        sum -= (i + j);
        j--;
    }

    printf("%d %d %d", i, j, sum);
    return 0;
}


