//This  program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen
#include <stdio.h>

int main()
{

int ch;
	printf("write one character here: \n");
ch = getchar();
	printf("The character you have entered is:\n ");
putchar(ch);
return 0;


}
