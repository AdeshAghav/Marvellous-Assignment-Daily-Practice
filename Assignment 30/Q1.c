/* Write a Program which Display ASCII table. Table Contains Symbol, Decimal, Hexadecimal and Octal Representaion of
   every Member from 0 to 255.
*/

#include<stdio.h>

void DisplayASCII()
{
    int iCount = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");


    for(iCount = 0; iCount<= 255 ; iCount++)
    {
        printf("%c\t%d\t%x\t\t%o\n", iCount, iCount, iCount, iCount);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}