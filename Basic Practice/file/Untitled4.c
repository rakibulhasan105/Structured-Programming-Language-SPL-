 #include<stdio.h>
int main ()
{
    FILE *file;
    char name[20];
    int age;
    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("file does not exist");
    }
    else
    {
        printf("file is opened \n");
        printf("Enter your name: ");
        gets(name);
        fputs(name,file);
        scanf("%d",&age);
        fprintf(file, "%s %d", name,age);
        fputs("\n",file);

        printf("secessful");
        fclose(file);

    }
    getch();
}
