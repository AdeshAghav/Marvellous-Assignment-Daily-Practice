/* Accept N Number from user and Accept one another number as NO, check whether NO is Present or not.
   Input:   N:  6
            NO: 66
            Elements: 85    66  3   66  93  88
    Output: True

    Input:  N:  6
            NO: 12
            Elements: 85    11  3   15  11  111
    Output: FALSE
   */

#include<stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iChk = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0, iLength = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is Not Present");
    }

    free(p);

    return 0;
}