/* Write a Program which Accepts range from user and return Addition of all even numbers in between that Range.
   (Range should contains positive numbers only)
   ex. Input: 23    30
       Output: 108
       
       Input: -10   2
       Output: Invalid Range
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCount = 0, iSum = 0;

    if((iStart>iEnd) || (iStart < 0) || (iEnd <= 0))
    {
        return -1;
    }

    for(iCount=iStart;iCount<=iEnd;iCount++)
    {
        if((iCount%2) == 0)
        {
            iSum = iSum + iCount;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else 
    {
        printf("Addition is %d",iRet);
    }

    return 0;
}