#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iCnt<0)              //updater
    {
        iCnt = -iCnt;
    }

    while(iCnt < iNo )
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}