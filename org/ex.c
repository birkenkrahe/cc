#include <stdio.h>
#define WERT 1.0

int main() {

printf("Constant is %.2f\n", WERT);

#define WERT 2.0
printf("Constant is %.2f\n", WERT);
return 0;
}
