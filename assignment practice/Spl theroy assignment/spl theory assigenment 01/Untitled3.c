#include <stdio.h>
int main() {
int a, b = 10, c;a=b;
a =5;
c = a + b;
for (int i= 0; i < 3; i++) {
c += i;
}
printf("%d\n", c);
return 0;
}
