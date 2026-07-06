/* Write a Program which accept Number from user and Display below pattern.
   ex. Input: 5
       Output: *    *   *   *   *   #   #   #   #   #

       Input: -2
       Output: *    *   #   #
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCount=1;iCount<=iNo;iCount++)
    {
        printf("*\t");
    }
    for(iCount=1;iCount<=iNo;iCount++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}