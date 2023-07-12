/* Display the two numbers 123 and 123.456 and align them at the left edge of the
field.*/
#include <stdio.h>
 
 int main()
{
    int num1, num2;
    num1 = 123;
    num2 = 123.456;
      printf("num1: %-3d\n", num1);
      printf("num2: %-6.3f\n", num2);
    return 0;


}
