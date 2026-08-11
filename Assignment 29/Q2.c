/* Accept Character from User and Check Whether it is Capital or Not (A-z).
   Input: F
   Output: It is Capital
   
   Input: d
   Output: It is not Capital
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is Not Capital");
    }

    return 0;
}