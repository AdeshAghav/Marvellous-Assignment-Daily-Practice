/* Accept Number of Rows and Number of Columns from user and display below Pattern.
   Input:   iRow = 4        iCol = 4
   Output:  2   4   6   8   
            1   3   5   7   
            2   4   6   8  
            1   3   5   7 
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 0;

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            iCount = 1;
        }
        else
        {
            iCount = 2;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);

            iCount = iCount + 2;
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