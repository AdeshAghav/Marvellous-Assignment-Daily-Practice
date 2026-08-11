/* Accept Character from User and Check Whether it is Small case or Not(a-z).
   Input: g
   Output: It is Small Case Character
   
   Input: D
   Output: It is Not a Small Case Character
*/

#include<stdio.h>

#define TURE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TURE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TURE)
    {
        printf("It is Small Case Character");
    }
    else
    {
        printf("It is Not a Small Case Character");
    }

    return 0;
}