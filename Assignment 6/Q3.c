/* Write a Program to find factorial of Given Number
   Ex. Input: 5
       Output: 123          (5*4*3*2*1)
*/

#include<Stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo<0)               // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iFact = iFact*iNo;
        iNo--;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d",iRet);

    return 0;
}