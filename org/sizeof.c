  
  
/* * The size of arrays */

/* - The ~sizeof~ operator can determine the size of arrays (in bytes). */

/* - If ~a~ is an array of ~10~ integers, then ~sizeof(a)~ is 40 provided */
/*   each integer requires 4 bytes of storage. */

/* - The block below declares and initializes an array of 10 elements and */
/*   prints its size in bytes. */
/*   #+name: sizeof */

/* [[file:14_arrays.org::sizeof][sizeof]] */
#include <stdio.h>






int main() {
int a[10000000] = {0};  // initialize all array elements with 0
printf("%d", sizeof(a)); 
return 0;
}
/* sizeof ends here */
