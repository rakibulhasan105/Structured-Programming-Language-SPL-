#include <stdio.h>
void main() {
int a = 5; int b = 10; int c;
c = a + b;

if (c > 10) {
printf("Sum is greater than 10\n");
} else {
printf("Sum is less than %d or equal to 10\n",c);
}
return 0;
}
