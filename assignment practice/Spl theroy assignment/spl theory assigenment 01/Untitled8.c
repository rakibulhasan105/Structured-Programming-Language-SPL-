#include<stdio.h>
int main ()
{
    int status;
    scanf("%d",&status);
    switch (status)
    {
    case 0:
        printf("Inactive");
        break;
    case 1:
        printf("Active");
        break;
    case 2:
        printf("Pending");
        if(status==2)
        {
            printf("- Awaiting approval");
        }
        break;
    default:
        printf("Unknown");
    }
    return 0;
}

