/* Write a Program which accepts range from user and Display all even numbers in between that range
   Ex. Input: 23    35
       Output: 24   26  28  30  32  34
       
       Input: -10   2
       Output: -10  -8  -6  -4  -2  0   2
*/

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart>iEnd)                         // Filter
    {
        printf("Invalid Range");
    }

    for(iCount=iStart;iCount<=iEnd;iCount++)
    {
        if(iCount%2 == 0)
        {
            printf("%d\t",iCount);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}