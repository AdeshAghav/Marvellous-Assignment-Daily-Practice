/* Accept Number from user and display below pattern
   Input : 5
   Output: A    B   C   D   E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = '\0';

    for(ch = 'A'; ch <('A' + iNo); ch++)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}