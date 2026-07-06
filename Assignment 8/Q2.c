/* write a Program which Accept width & Height of Rectangle from User and calculate its area
   Input: 5.3    9.78
   Output: 51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = fWidth*fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle %lf",dRet);

    return 0;
}