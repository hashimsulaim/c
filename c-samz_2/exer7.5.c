//exer7.5.c:using while and for loop to make nested loops
#include<stdio.h>

 int main()
{

int i, j;
       i = j = 1;
     
     while(i<=3){//outer loop  
  printf("The start of iratation %d of the outer loop.\n", i);
  i++;
	  do{  //inner loop
		  printf("iteration %d of the inner loop.\n", j);
		  j++;
}while(j <= 4);
	  
		   printf("The end of iteration %d of the outer loop.\n", i);

  return 0;
   }
