/* Accept N NUmbers from user and Display all such elements Which are divisible by 5.
   Input:   N: 6
            Elements: 85    66  3   80  93  88
    Output: 85  80
*/

#include<stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    int iDiv = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 5) == 0)
        {
            iDiv = Arr[i];
            printf("%d\t",iDiv); 
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter Number of Elelments: ");
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

    Display(p,iSize);

    free(p);

    return 0;
}