/* Accept N Numbers from user and accpet Range, Display all Elements from that range
   Input:   N: 6
            Start: 60
            End:   90
   Elements: 85    66  3   76  93  88
   Output: 66   76  88
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] >= iStart && Arr[i] <= iEnd)
        {
           printf("%d\t",Arr[i]); 
        }
    }
}

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

    printf("Enter Start Number: ");
    scanf("%d",&iValue1);

    printf("Enter End Number: ");
    scanf("%d",&iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}