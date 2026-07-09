/* Write a program which accept range from user and display all Numbers in between that range in Reverse Order.
   ex. Input: 23    35
       Output: 35   34  32  31  30  29  28  27  26  25  24  23

       Input: -10   2
       Output: 2    1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10

       Input: 90    18
       Output: Invalid Range
*/

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart>iEnd)                           // Filter
    {
        printf("Invalid Range ");
    }

    for(iCount=iEnd;iCount>=iStart;iCount--)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter starting point: ");
    scanf("%d",&iValue1);

    printf("enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}