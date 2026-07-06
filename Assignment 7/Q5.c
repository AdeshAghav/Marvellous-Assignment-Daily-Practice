/* Write a Program which returns Difference between Even factorial and Ood factorial of given Number
   ex. Input: 5
       Output: -7           (8-15)
       
       Input: -5
       Output: -7            (8-15)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCount = 0, iFactEvn = 1, iFactOdd = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCount=iNo;iCount>=2;iCount--)
    {
        if(iCount%2 ==0)
        {
            iFactEvn = iFactEvn*iCount;
        }
    }

    for (iCount=iNo;iCount>=1;iCount--)
    {
        if(iCount%2 != 0)
        {
            iFactOdd = iFactOdd*iCount;
        }
    }
    return iFactEvn-iFactOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}