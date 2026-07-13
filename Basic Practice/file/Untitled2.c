
#include<stdio.h>
int main ()
{
    FILE *file;
    char name[20]="Rakibul Hasan";
    int length=strlen(name);
    int i;
    file = fopen("test.txt", "w");
    if(file==NULL)
    {
        printf("file does not exist");
    }
    else
    {
        printf("file is opened \n");
        for(i=0; i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("sucesfully ");
        fclose(file);
    }
}
