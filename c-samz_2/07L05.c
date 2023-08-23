//07L05.c:This programme demostrates using of nested loops 
#include <stdio.h>

int main()
{
   int i, j;

    for (i=1; i<=3; i++){// the outer loop
      printf("The start of iteration %d of the outer loop.\n", i);
        for (j=1; j<=4; j++)// inner loop
		printf("The iteration %d of inner loop\n", j);
	printf("The end of iteration %d of the outer loop\n", i);
    
    }
return 0;

}
