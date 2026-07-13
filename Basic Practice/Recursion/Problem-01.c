#include<stdio.h>
void printHlw(int count);

int main()
{
    printHlw(5);

    return 0;
}

void printHlw(int count)
{
    if(count == 0){
        return;
    }
    printf("Hello world!\n");
    printHlw(count-1);
}