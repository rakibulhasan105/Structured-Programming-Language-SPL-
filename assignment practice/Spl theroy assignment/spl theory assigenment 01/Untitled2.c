#include <stdio.h>
int main() {
int a = 2; float b = 5.5; float sum;
sum = a + b;
if (sum > 5) {
printf("Sum: %.2f is greater than 5",sum);
} else {
printf("Sum: %.2f is less than or equal to 5",sum);

}
return 0;
}
