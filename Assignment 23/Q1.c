/* Accept Number of rows and Columns from user and display below Pattern.
   Input:   iRow = 4    iCol = 3
   Output: *    *   *   
           *    *   *
           *    *   *
           *    *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(j = 1; j <= iRow; j++)
    {   
        for(i = 1; i <= iCol; i++)
        {
            printf("*\t");
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}