//07L03.c:This programme converts numbers 0 through 16 to Hex number.
#include <stdio.h>

int main()
{
int i;
       printf("HEX          hex          Decimal.\n");
       for (i=0; i<16; i++){
       printf("%X           %x            %d\n.", i, i, i);

       }
return 0;
}

