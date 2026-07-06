/* Accept amount in US Dollar and returns its corresponing Value in Indian Currency Consider 1$ AS 70 rupees
   ex. Input: 10
       Output: 700
*/

#include<stdio.h>

int DollartoINR(int iNo)
{
    int iMult = 0;

    iMult = iNo*70;
    return iMult;
}

int main ()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD: ");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}