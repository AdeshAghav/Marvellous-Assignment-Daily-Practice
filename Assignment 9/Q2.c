/* Write a Program Which Accept Number from user and return the Count of Odd Digits.
   ex. Input: 2395
       Output: 3
       
       Input: -1018
       Output: 2
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)   // Updator
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10; 

        if(iDigit % 2 != 0)  // Check if Odd
        {
            iCnt++;
        }

        iNo = iNo / 10;      // Remove last digit
    }

    return iCnt; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
    return 0;
}