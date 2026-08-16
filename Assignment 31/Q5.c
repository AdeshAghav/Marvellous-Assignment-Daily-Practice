/* Write a Program which Accept String from user Display it in reverse order.
   Input: MarvellouS
   Output: Suollevram
*/

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int i = 0;

    for(i = strlen(str)-1; i>= 0; i--)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}