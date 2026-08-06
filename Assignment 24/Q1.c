/* Accept Number of Rows and Number of Columns from user and display below Pattern.
   Input:   iRow = 4    iCol = 4
   Output:  A   B   C   D
            A   B   C   D
            A   B   C   D  
            A   B   C   D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int ivalue2 = 0;

    printf("Enter Number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns: ");
    scanf("%d", &ivalue2);

    Pattern(iValue1, ivalue2);

    return 0;
}