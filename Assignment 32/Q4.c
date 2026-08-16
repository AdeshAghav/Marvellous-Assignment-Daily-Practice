/* Write a Program which Accept String from user and Display Only Digits from that String.
   Input: Marve89llous121
   Output: 89121
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void DisplayDigit(char *str)
{
    int i = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(isdigit(str[i]))
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}