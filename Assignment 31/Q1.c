/* Write a Program which accept string from user and count number of capital characters.
   Input: "Marvellous Multi OS"
   Output: 4
*/

#include<stdio.h>
#include<ctype.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(isupper(*str))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}