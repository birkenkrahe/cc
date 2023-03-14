#include <stdio.h>






int main() {
int i, j;
float x, y;

scanf("%d%d%f%f", &i, &j, &x, &y);

printf("|%5d|%5d|%5.1f|%10.1f|\n", i, j, x, y);
return 0;
}
