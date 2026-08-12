/* Accept Character from user. If Character is Small display its
   Corresponding capital character, and if it small then display its 
   Corresponding Capital. In Other cases display as it is.
    Input: Q
    Output: q
*/

#include<stdio.h>
#include<ctype.h>

void Display(char ch)
{
    if(islower(ch))
    {
        printf("Output: %c",toupper(ch));
    }
    else if(isupper(ch))
    {
        printf("Output: %c", tolower(ch));
    }
    else
    {
        printf("Output: %c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}