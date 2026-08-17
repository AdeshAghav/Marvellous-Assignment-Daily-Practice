/* Write a Program which Accpet String from user and Accept one Character. Return index of Last 
   Occurrence of that Character.
   Input: Marvellous Multi OS
          M
   Output: 11
*/

#include<stdio.h>
#include<string.h>

int LastChar(char *str, char ch)
{
    int i = 0;

    for(i = strlen(str)-1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("%d", iRet);

    return 0;
}