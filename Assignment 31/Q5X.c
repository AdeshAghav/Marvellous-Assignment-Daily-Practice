/* Write a Program which Accept String from user Display it in reverse order.
   (using while loop)
   Input: MarvellouS
   Output: Suollevram
*/

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int i = 0;
    i = strlen(str)-1;

    while(i >= 0)
    {
        printf("%c",str[i]);
        i--;
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