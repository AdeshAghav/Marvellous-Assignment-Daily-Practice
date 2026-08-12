/* Accept Character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*).
   Input: %
   Output: TRUE
   Input: d
   Output: FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) ||((ch >= 'a') && (ch <= 'z')))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Charcter");
    }
    else
    {
        printf("It is Not Special Character");
    }

    return 0;
}