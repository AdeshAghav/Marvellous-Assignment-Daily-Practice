/* Write a program which Accept Number from user and display its factors in decreasing oder.
   Input : 12
   Output : 6   4   3   2   1

   Input : 13
   output : 1
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    for(i =(iNo/2); i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}