/* Accept N Number from user and return difference between summation of even elements and summation of odd elements
   ex. Input:    N: 6
       Elements: 85     66      3       80      93      88
       
       Output: 53   (234-181)   
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
   int i = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[i];
        }
        else
        {
            iOddSum = iOddSum + Arr[i];
        }
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

    iLength = iSize;

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d Elements: \n",iSize);

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}