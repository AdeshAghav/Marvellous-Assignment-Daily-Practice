/*Accept Two Numbers from User and Diplay first Number in Second number of times
ex. 
Input : 12  5
Output :12  12  12  12  12
*/ 

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;

    if(iNo<0)                                   //Updator
    {
        iNo = -iNo;
    }
    else if (iFrequency < 0)                   //Updator
    {
        iFrequency = -iFrequency;
    }
    for(i = 0; i < iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}