/* Write a Program which Accept Sting from user and Check whether it Contains Vowels in it or not.
   Input: marvellous
   Output: It Contains Vowel
   
   Input: xyz
   Output: Not Contains Vowel
*/

#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    char ch = '\0';

    while(*str != '\0')
    {
        ch = toupper(*str);

        if((str == 'A') || (str == 'E') || (str == 'I') || (str == 'O') || (str == 'U'))
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\0']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It Contains Vowel");
    }
    else
    {
        printf("Not Contains Vowel");
    }

    return 0;
}