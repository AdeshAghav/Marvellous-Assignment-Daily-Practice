/* 
Accept Number from User and Check Whether Number is Even or Odd
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOLL;

BOLL ChkEven(int iNo)
{
    if(iNo % 2 ==0)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOLL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even Number",iValue);
    }

    else
    {
        printf("%d is Odd Number",iValue);
    }

    return 0;
}