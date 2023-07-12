/*04L04.c:interger vs float division*/
#include <stdio.h>

int main()
{
    int int_div1, int_div2, int_div3; /*declaring integer variables*/
    float flotdiv1, flotdiv2, flotdiv3; //declaring float variables

    int int_div1 = 32 / 10; // both the divisor and devident are integers
    float flotdiv1 = 32 / 10;  
    
    int int_div2 = 32.0 / 10; //the divisor is an integer
    float flotdiv2 =32.0 / 10;

    int int_div3 = 32 / 10.0; //the divident is a interger
    float flotdiv3 = 32 / 10.0;

    printf("The integer result of 32 and 10 is: %d.\n", int_div1);
     printf("The float result of 32 and 10 is: %f.\n", flotdiv1);
    printf("The integer result of 32.0 and 10 is: %d.\n", int_div2);
     printf("The float result of 32.0 and 10 is: %f.\n", flotdiv2);
   printf("The integer result of 32 and 10.0 is: %d.\n", int_div3);
     printf("The float result of 32 and 10.0 is: %f.\n", flotdiv3);

     return 0;

}
