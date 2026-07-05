/* Write a Program Which Accepts Number from User and Display its Table in reverse order.
   ex. Input: 2
       Output: 20   18  16  14  12  10  8   6   4   2
       
       Input: -5
       Output: 50   45  40  35  30  25  20  15  10  5
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iMult = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for (iCnt=10; iCnt>=1; iCnt--)
    {
        iMult = iCnt*iNo;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}