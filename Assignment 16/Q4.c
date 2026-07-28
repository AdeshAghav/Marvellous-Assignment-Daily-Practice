/* Accept Number from user and display all such numbers which contains 3 digits in it.
   Input:   N:  6
            Elements: 8225   665    3     76    953   858
   Output: 665    953      858
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
   int iCnt = 0;

   if(Arr[iCnt] < 0)
   {
      Arr[iCnt] = -Arr[iCnt];
   }

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
      if((Arr[iCnt] > 99) && (Arr[iCnt] <= 999))
      {
         printf("%d\t",Arr[iCnt]);
      }
   }
}

int main()
{
   int iSize = 0, iCnt = 0, iValue = 0, iLength = 0;
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

   Digits(p, iSize);

   free(p);

   return 0;
}