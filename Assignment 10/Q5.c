/* Write a program which accept Area in Squere feet and convert it into Square meter.

   Input: 5
   Output: 0.464515
*/

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = iNo * 0.09290304;

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area in Square Mater %lf",dRet);

    return 0;
}