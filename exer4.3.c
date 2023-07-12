//exer4.3.c: A programme that prints out  the value of dbl_num in both floating-point and scientific notation formats

#include <stdio.h>

int main()
{
    double  dbl_num = 123.456;
    printf(" The value of dbl_num in floating-point is: %f.\n", dbl_num);
        printf(" The value of dbl_num in scientific-natation is: %e.\n", dbl_num);
        return 0;
    

}