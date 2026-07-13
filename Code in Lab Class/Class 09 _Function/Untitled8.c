#include<stdio.h>
#include<math.h>
void TakeInput(int array[], int size){
    printf("Enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
}

double CalcMean(int array[], int num_of_elem){
    int sum=0, i;
    double mean;
    for(i=0;i< num_of_elem; i++){
        sum=sum+array[i];
    }
    mean=sum/num_of_elem;
    return mean;
}
double Calc_Std_deviation(int array[], int num_of_elem){
    double mean = CalcMean(array, num_of_elem);
    double variance = 0.0;

    for (int i = 0; i < num_of_elem; i++) {
        variance = variance + pow(array[i] - mean, 2);
    }

    double standard_deviation = sqrt(variance / num_of_elem);

    return standard_deviation;

}
int main(){
    int size;
    double standard_deviation;
    printf("How many numbers? ");
    scanf("%d",&size);
    int array[size];

    TakeInput(array, size);
    standard_deviation=Calc_Std_deviation(array, size);

    printf("Standard deviation is %lf",standard_deviation);

}
