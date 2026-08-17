/* Write a Program which Accept String from User and Accpet one Character.
   Check Whether that character is Present in string or not.
   Input: Mavellous Multi OS
          e
   Output: Character Found
   
   Input: Marvellous Multi OS
          w
   Output: Character Not Found
*/

#include<stdio.h>
#include<string.h>

#define TURE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(str[i] == ch)
        {
            return TURE;
        }
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TURE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }

    return 0;
}