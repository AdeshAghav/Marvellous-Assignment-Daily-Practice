/* Write a Program which Accept String from user and Count Number of Small Characters.
   Input: "Marvellous"
   Output: 9
*/

#include<stdio.h>
#include<ctype.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(islower(*str))
        {
            iCount++;
        }
        str++; 
    }

    return iCount;
}

int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", &Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);

    return 0;
}