/* write a Program which Accepts distance in kilometre and Convert it into meter.
   Input: 5
   Output: 5000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMtr = iNo*1000;
    
    return iMtr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The Distance in Meter is %d",iRet);

    return 0;
}