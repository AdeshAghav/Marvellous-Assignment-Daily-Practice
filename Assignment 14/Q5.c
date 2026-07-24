/* Accept N Number from user and Accept one another number as NO, return frequency
   of NO form it
   Input:   N:  6
            NO: 66
            Elements: 85    66  3   66  93  88
    Output: 2

    Input:  N:  6
            NO: 12
            Elements: 85    11  3   15  11  111
    Output: 0
   */

#include<stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iFreq = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter Number of Elelments: ");
    scanf("%d",&iSize);

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iLength = iSize;

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d elements: \n",iLength);

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        printf("Enter Element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}