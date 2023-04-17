

/* - Note that in the concise version [[concise_counting]], it makes a */
/*   difference if we use ~i--~ or ~--i~. Try it! */

/* ** Infinite loops */

/* - If the controlling expression always has a non-zero value, the */
/*   ~while~ statement will not terminate. */

/* - The compiler does not check this. The program [[inf]] has to be */
/*   stopped manually (~C-g~). */
/*   #+name: inf */

/* [[file:../org/13_loops.org::inf][inf]] */
#include <stdio.h>






int main() {
while (1)
puts("Still running...\n");
return 0;
}
/* inf ends here */
