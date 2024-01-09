//set a given bit without bitwise operators
#include<stdio.h>
#include"bitdisplay.h"
void bitmanip(int a, int posn)
{
 int result = a;
    int mask = 1;
    for (int i = 0; i < posn; i++) {
        mask *= 2;
    }

    if ((a / mask) % 2 == 0) {   //checking if the bit is set -> if not setting it
        result = a + mask;
    }
displaybits(result);    
}

int main()
{
int a=13,num;
displaybits(a);
printf("%x\n",a);
printf("enter the posn to manipulate\n");
scanf("%d",&num);
bitmanip(a,num);
return 0;
}
