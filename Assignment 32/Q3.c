/* Write a Program Which Accept String from user and toggle the Case.
   Input: Marvellous Multi OS
   Output: mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strtoggle(char *str)
{
    int i = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s",str);
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    strtoggle(arr);

    return 0;
}