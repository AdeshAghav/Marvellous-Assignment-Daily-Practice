/* Write a Program which Accept String from user reverse that String in Place
   Input: abcd
   Output: dcba
*/

#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int i = 0;

    for(i = strlen(str)-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    return 0;
}