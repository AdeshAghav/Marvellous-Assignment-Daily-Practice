/* Write a Program which Accept Number from user and return the count of even digits.
   ex. Input: 2395
       Output: 1
       
       Input: -1018
       Output: 2
*/

#include<stdio.h>

int CountEven(int iNo)
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

        if(iDigit % 2 == 0)  // Check if even
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}