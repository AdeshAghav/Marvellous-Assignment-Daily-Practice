/* Accept N Numbers from user and return product of all odd elements.
   Input:   N:  6
            Elements: 15    66  3   70  10  88
    Output: 45
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0, iMult = 1, iFlag = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iMult = iMult* Arr[i];
            iFlag = 1; 
        }
    }

    if(iFlag == 0)
    {
        return 0;
    }
    
    return iMult;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}