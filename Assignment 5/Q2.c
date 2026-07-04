/* Write a Program which Accept NUmber from user and print Numbers till that Number
   Input : 8
   Output : 1   2   3   4   5   6   7   8
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;
    
    for(iCount=1;iCount<=iNo;iCount++)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}