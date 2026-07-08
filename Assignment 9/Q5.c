/* Write a Program which accepts Number from user and return difference between Summation of Even digits and Summation of odd digits.
   ex. Input: 2395
       Output: -15           (2 - 17)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    while(iNo!=0)
    {
        iDigit = iNo % 10;

        if((iDigit%2)==0)
        {
            iEvenSum = iEvenSum+iDigit;
        }
        else
        {
            iOddSum = iOddSum+iDigit;
        }
        iNo = iNo/10;
    }
    return iEvenSum-iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}