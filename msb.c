#include <stdio.h>
int main()

{
    int num=7, msb;

  int BITS;
    msb = 1 << (BITS - 1);

     
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}
