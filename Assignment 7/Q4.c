/* write a program to find add factorial of given Number
    ex. Input: 5
        Output: 15          (5 * 3 * 1)
        
        Input:-5
        Output: 15          (5 * 3 * 1)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCount = 0, iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCount=iNo;iCount>=1;iCount--)
    {
        if(iCount%2 !=0)
        {
            iFact = iFact*iCount;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is %d",iRet);

    return 0;
}