/* Accept Character from user. if it is capital then display all the
   characters from the Input charater till Z. If input charater is small
   then print all the characters in reverse order till a. In other cases
   return directly.
   Input: Q
   Output:Q R   S   T   U   V   W   X   Y   Z
   
   Input: m
   Output: m    l   k   j   i   h   g   f   e   d   c   b   a
*/

#include<stdio.h>
#include<ctype.h>

void Display(char ch)
{
    char cDisplay = '\0';

    if(isupper(ch))
    {
       for(cDisplay = ch; cDisplay <= 'Z'; cDisplay++)
       {
            printf("%c\t",cDisplay);
       }
    }
    else if(islower(ch))
    {
        for(cDisplay = ch; cDisplay >= 'a'; cDisplay--)
        {
            printf("%c\t",cDisplay);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
} 