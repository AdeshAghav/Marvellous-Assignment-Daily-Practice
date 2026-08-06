/* Accept Number of Rows and Number of Columns from User and Display below Pattern.
   Inout:   iRow = 3    iCol = 5
   Output:  A   A   A   A   A
            B   B   B   B   B
            C   C   C   C   C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    ch = 'A';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }

        printf("\n");
        ch++;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}