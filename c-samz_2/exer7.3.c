//exer7.3.c:using a while loop
#include<stdio.h>

int main()
{
int c;
	c = ' ';
	printf("Enter character:\n enter K to quite\n");
	while(c != 'K'){
		c = getc(stdin);
			putchar(c);
	}
	printf("\nout of the loop.Bye.\n");

return 0;
}

