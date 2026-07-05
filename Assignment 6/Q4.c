/* Write a Program which Accepts Number from user and display its Table
   ex. Input: 2
       Output: 2    4   6   8   10  12  14  16  18  20

       Input: -5
       Output: 5    10  15  20  25  30  35  40  45  50
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iMult = 0;

    if(iNo<0)               // Updator
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iMult = iCnt*iNo;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}