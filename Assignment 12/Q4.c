/* Write a Program which Accept Number from User and Count frequency of 4 in it.
   Ex. Input: 9440
       Output: 2
*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("The Frequency of 4's are: %d",iRet);

    return 0;
}