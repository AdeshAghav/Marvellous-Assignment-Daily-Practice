/* Accept one Character from User and Check whether that charcter is vowel (a,e,i,o,u) or Not.
   ex.
   Input : E        Output : TRUE

   Input : d        Output : FALSE
*/
#include<stdio.h>

typedef char BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue1)
{
    if(cValue1=='A' | cValue1=='E' | cValue1=='I' | cValue1=='O' | cValue1=='U' | cValue1=='a' | cValue1=='e' | cValue1=='i' | cValue1=='o' | cValue1=='u')
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}