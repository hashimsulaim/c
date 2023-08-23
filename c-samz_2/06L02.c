/*Using Pre- or Post-Increment and Decrement Operators*/
#include <stdio.h>

int main()
{
	int w, x, y, z, result;
	w = x = y = z = 1;
	  printf("Given that w = %d, x = %d y = %d z = %d.\n",w, x, y, z);

	  result = ++w;
		  printf("++w evaluates to %d and now w is %d.\n ", result,w);
	  result = x++;
		  printf("x++ evaluates to %d and now w is %d.\n ", result,x);
	  result = --y;
		  printf("--y evaluates to %d and now w is %d.\n ", result,y);
	  result = z--;	  
		  printf("z-- evaluates to %d and now w is %d.\n ", result,z);
return 0;		  

                    

}

