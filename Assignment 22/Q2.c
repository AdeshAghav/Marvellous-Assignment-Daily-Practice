/* Accept Number from user and Display Below Pattern.
   Input: 5
   Output: 5    #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t",i);
    }
}

int main()
{
    int iVlaue = 0;

    printf("Enter Number of Elements: ");
    scanf("%d",&iVlaue);

    Pattern(iVlaue);

    return 0;
}