// using relational operators 
#include <stdio.h> 

int main()
{

int x, y;
double z;

 x = 7;
 y = 25;
 z = 24.46;

     printf("Given that x = %d, y = %d, z = %.2f", x, y, z);
 /*printing out the results produced by the following relational expressions*/
    
     printf("x >= y produces %d.\n", x >= y);
     printf("x == y produces %d.\n", x == y);
     printf("x > y produces %d.\n", x > y);
     printf("x < y produces %d.\n", x < y);
     printf("x != y - 18 produces %d.\n", x != y - 18);
     printf("x + y != z produces %d.\n", x + y != z);
  return 0;   
}
