/* Write a Program which Accept Number from user and print its numbers line.
   Input : 4
   Output : -4  -3  -2  -1  0   1   2   3   4
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;
    for(iCount=-iNo; iCount<=iNo;  iCount++)
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