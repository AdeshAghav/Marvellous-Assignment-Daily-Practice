/* Write a Program which Accept Number from User and Count Frequency of 2 in it 
   ex. Input: 2395
       Output: 1
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("The Frequency of 2's are: %d",iRet);

    return 0;
}