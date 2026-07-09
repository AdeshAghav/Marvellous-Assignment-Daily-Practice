/* Write a Program which accepts temperature in Fahrenheit and convert it into celsius
   
   Input: 10
   Output: -12.2222     (10-32) * (5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp-32) * (5.0/9.0);

    return dCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Tempereture in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The Temperature in Celsius is %lf",dRet);

    return 0;
}