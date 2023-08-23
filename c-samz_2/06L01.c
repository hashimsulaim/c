/*06L01.c:using arithmetic Assignment Operators*/
#include <stdio.h>

int main()
{
//declaring and assigning variables
int x, y, z;
	x = 1;
	y = 3;
	z = 10;

printf("Given that x = %d, y = %d, z = %d.\n", x, y, z);	
   
    x = x + y;
     printf("x = x + y assigns %d to x\n", x);

     x = 1; // reset x
     x += y;
	     printf("x += y assigns %d to x\n", x);
	
	z = z * x + y;     
    printf("z = z * x + y assigns %d to z\n", z);     
        
    z = 10; // reset z
    z = z * (x + y);
    printf("z = z * (x + y) assigns %d to z\n", z);     
        
        z = 10;
        z *= x + y;
    printf("z *= x + y assigns %d to z\n", z);     

    return 0;

}
