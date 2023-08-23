//07L01.c:using a while loop 
#include<stdio.h>

int main()
{
int c;
	c = ' ';
	printf("Enter character:\n enter x to quite\n");
	while(c != 'x'){
		c = getc(stdin);
			putchar(c);
	}
	printf("\nout of the loop.Bye.\n");

return 0;
}
