/* Write a Program which Accepts Number from User and print Even factors of that Number.
   ex.
   Input:   36
   Output:  2   6   12  18
*/
#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;                     // Updator
    }

    for(i=1; i<=(iNo/2) ; i++)
    {
        if(iNo % i == 0 && (i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}