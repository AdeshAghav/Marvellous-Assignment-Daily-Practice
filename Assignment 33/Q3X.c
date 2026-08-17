/* Write a Program which Accpet string from user and Accept one
   Character. REturn index of First Occurrence of that character.
   Input: Marvellous Multi OS
          M
   Output: 0
   
   Input: Marvellous Multi OS
          e
   Output: 4
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    ch = tolower(ch);

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(tolower(str[i]) == ch)
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

    iRet = FirstChar(arr, cValue);
    printf("Character Location is %d",iRet);

    return 0;
}