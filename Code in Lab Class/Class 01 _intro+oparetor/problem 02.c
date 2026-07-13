#include<stdio.h>
int main(){
    int num;
    float f;
    double d;
    char ch;

    printf("Enter the integer value: ");
    scanf("%d",&num);
    printf("Enter the float value: ");
    scanf("%f",&f);
    printf("Enter the double value: ");
    scanf("%lf",&d);
    while (getchar() != '\n');
    printf("Enter the char value: ");
    scanf("%c",&ch);


    printf("The integer value is: %d\n",num);
    printf("The float value is: %f\n",f);
    printf("The double value is: %lf\n",d);
    printf("The character value is: %c\n",ch);
    return 0;
}
