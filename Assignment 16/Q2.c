/* Accept NUmber from user and return the Smallest number.
   Input:   N:  6
            Elements: 85    66  3   66  93  88
   Output: 3
*/

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
   int iCnt = 0, iMin = Arr[0];

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
      if(iMin>Arr[iCnt])
      {
         iMin = Arr[iCnt];
      }
   }
   return iMin;
}

int main()
{
   int iSize = 0, iRet = 0, iCnt = 0, iValue = 0, iLength = 0;
   int *p = NULL;

   printf("Enter Number of Elements: ");
   scanf("%d",&iSize);

   iLength = iSize;

   p = (int *)malloc(iSize*sizeof(int));

   if(p==NULL)
   {
      printf("Unable to Allocate Memory");
      return -1;
   }

   printf("Enter %d Elements\n",iLength);

   for(iCnt = 0; iCnt<iSize; iCnt++)
   {
      printf("Enter Elements %d : ",iCnt+1);
      scanf("%d",&p[iCnt]);
   }

   iRet = Minimum(p, iSize);

   printf("Smallest Number is %d",iRet);

   free(p);

   return 0;
}