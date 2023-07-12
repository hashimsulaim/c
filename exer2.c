/*exer2.c:calculate the multiplication of two numbers and print the results*/
#include <stdio.h>

//This multiplies two numbers and prints the product
int multp(int x, int y)
{
	int result;
        result = x * y;
	return result;
}

int main()
{
	int product;
	product = multp(5, 16);
	printf("The product of of 5 and 16 is %d.\n",product);
       	return 0;
}
