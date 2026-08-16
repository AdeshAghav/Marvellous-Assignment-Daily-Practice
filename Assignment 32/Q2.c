/* Write a Program which Accept String from user and Convert it into Upper Case.
   Input: Marvellous Multi OS
   Output: MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void struprx(char *str)
{
    int i = 0;

    for(i = 0; i <= strlen(str)-1; i++)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    return 0;
}