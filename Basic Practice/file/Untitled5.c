#include<stdio.h>
int main ()
{
    FILE *file;
    char name[20];
    int age;
    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("file does not exist");
    }
    else
    {
        printf("file is opened \n");





        printf("secessful");
        fclose(file);

    }
    getch();
}

