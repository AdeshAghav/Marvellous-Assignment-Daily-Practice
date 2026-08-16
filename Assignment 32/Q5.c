/* Write a Program which Accept String from user and Count Number of white spaces.
   Input: Marvellous
   Output: 0
   
   Input: Marvellous Infosytems
   Output: 1
*/

#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(str[i] == ' ')
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("Number of White Spaces are: %d",iRet);

    return 0;
}