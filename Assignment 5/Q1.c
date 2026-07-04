/* Write a program which Accept Number from user and print that number of $ and * on Screen
   Input : 5
   Output : $   *   $   *   $   *   $   *   $   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)                   //Updator
    {
       iNo = -iNo;
    }

    int iCounter = 0;

    while(iCounter<=iNo)
    {
        for(iCounter=1;iCounter<=iNo;iCounter++)
        {
            printf("$\t*\t");
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}