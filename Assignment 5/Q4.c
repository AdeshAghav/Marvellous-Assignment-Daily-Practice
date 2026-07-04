/* Write a program which accepts N from user and print all odd numbers up to N.
   Input : 18
   Output : 1   3   5   7   9   11  13  17
*/
#include<stdio.h>

void OddDisplay(int iNO)
{
    int iCount = 0;
    for(iCount = 1; iCount<=iNO; iCount++)
    {
        if((iCount%2) != 0)
        {
            printf("%d\t",iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}