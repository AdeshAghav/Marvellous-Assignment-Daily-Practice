/* Write a Program which accept N and print first 5 multiples of N.
   Input : 4
   Output : 4   8   12  16  20
*/
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = iNo; iCount<=(iNo*5); iCount++)
    {
        if((iCount%iNo)==0)
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

    MultipleDisplay(iValue);

    return 0;
}