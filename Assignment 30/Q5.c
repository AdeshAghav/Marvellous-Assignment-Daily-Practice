/* Accept character from user and Display its ASCII value in Decimal, Octal and Hexadecimal format.
   Input: A
   Output: Decimal      65
           Octal        0101
           Hexadecimal  0X41
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal: %d\nOctal: %o\nHexadecimal: 0X%x\n",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}