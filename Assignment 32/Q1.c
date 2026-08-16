/* Write a Program which Accpet String from user and Convert it into Lower case.
   Input: Marvellous Multi OS
   Output: marvellous multi os
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strlwrx(char *str)
{
    int i = 0;

    for(i = 0; i <= (strlen(str)-1); i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("Modified String is : %s\n",str);
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    return 0;
}