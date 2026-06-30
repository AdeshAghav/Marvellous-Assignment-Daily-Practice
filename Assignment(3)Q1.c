/* Write a program which Accept one Number from User and print that Number of even Numbers on Screen
   ex.
   Input : 7
   Output : 2   4   6   8   10  12  14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;
    if(iNo <= 0 )
    {
       return;
    }
    for(iCnt = 1;iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iEven);
        iEven = iEven+2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
