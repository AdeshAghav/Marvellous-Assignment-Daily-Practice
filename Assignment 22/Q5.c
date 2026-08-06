/* Accept Number from user and display below Pattern.
   Input: 8
   Output: 2    4   6   8   10  12  14  16
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 2; i <= (iNo*2); i = i+2)
    {
        printf("%d\t",i);   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}