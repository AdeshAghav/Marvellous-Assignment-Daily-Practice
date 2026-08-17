/* Write a Program whic Accept String from user and Accept one Character. Return frequency of that character.
   Input: Marvellous Multi OS
          M
   Output: 2
   
   Input: Marvellous Multi OS
          W
   Output: 0
*/

#include<stdio.h>
#include<string.h>

int CountChar(char *str, char ch)
{
    int i = 0;
    int iFreq = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(ch == str[i])
        {
            iFreq++;
        }
    }

    return iFreq;
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

    iRet = CountChar(arr, cValue);

    printf("Character Frequency is %d",iRet);

    return 0;
}