/* Write a Program which Accept Range from user and return Addition of all Numbers in between that Range.
S(Range should contains Positive Numbers only)
   ex. Input: 23    30
       Output: 212
       
       Input: -10   2
       Output: Invalid Range
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCount = 0, iSum = 0;

    if((iStart>iEnd) || (iStart < 0) || (iEnd <= 0))
    {
        return -1;
    }

    for(iCount=iStart;iCount<=iEnd;iCount++)
    {
        iSum = iSum + iCount;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is: %d",iRet);
    }
    
    return 0;
}