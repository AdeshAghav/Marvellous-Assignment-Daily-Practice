/* Write a program which accept range from user and display all Numbers in between that range.
   ex. Input: 23     35
       Output: 23   24  25  26  27  28  29  30  31  32  33  34  35
    
       Input: -10      2
       Output: -10  -9  -8  -7  -6  -5  -4  -3  -2  -1  0   1   2
*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart>iEnd)                           // Filter
    {
        printf("Invalid Range ");
    }

    for(iCount=iStart;iCount<=iEnd;iCount++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}