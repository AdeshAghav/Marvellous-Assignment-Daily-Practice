/* Accept N Numbers from user and Accept one another Number as NO, return index
   of Last Occurrence of that NO.
   Input:   N:  6
            NO: 66
            Elements: 85    66  3   66  93  88
    Output: 3
    Input:   N:  6
            NO: 12
            Elements: 85    66  3   15  11  111
    Output: -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = iLength-1; i>= 0; i--)
    {
        if(Arr[i] == iNo)
        {
           return i; 
        }
    }
    return -1;
}

int main()
{
    int iSize = 0,iRet = 0, iValue = 0, iCnt = 0, iLength = 0;
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last Occurence of Number is %d",iRet);
    }

    free(p);

    return 0;
}