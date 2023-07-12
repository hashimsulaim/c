/* 05L01.c:Reading input by calling putc()*/
#include <stdio.h>

int main()
{
	int ch;
	printf("Enter a single character: .\n");
	ch = getc(stdin);
		printf("The character you have entered is: %c.\n", ch);
	return 0;
}
