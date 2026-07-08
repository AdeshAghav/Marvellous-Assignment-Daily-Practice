/* Write a Program which accept Number From user and return the count of digits in 
   between 3 and 7.
   ex. Input: 9922
       Output: 0
       
       Input: 2395
       Output: 1
*/

#include<stdio.h>

int CountRange(int iNo)
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

        if(iDigit > 3 && iDigit < 7)  // Check if digit is between 3 and 7
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}