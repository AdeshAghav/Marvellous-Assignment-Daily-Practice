/* Write a Program which Accept Number from User and Display all its non factors
   ex.
   Input : 12
   Output: 5    7   8   9   10  11

   Input : 10
   Output: 3    4   6   7   8   9
*/

#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    for(i=2; i<iNo; i++)
    {   
        if(iNo % i != 0)
        {
            printf("%d\t",i);
        } 
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}