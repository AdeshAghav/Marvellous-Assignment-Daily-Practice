/* Write a Program which Accept String from user and Return
   Difference between frequency of small characters and frequency
   of Capital Characters.
   Input: "Marvellous"
   Output: 6    (8-2)
*/

#include<stdio.h>
#include<ctype.h>

int Difference(char *str)
{
    int iCap = 0;
    int iSml = 0;
    
    while(*str != '\0')
    {
        if(isupper(*str))
        {
            iCap++;
        }
        else
        {
            iSml++;
        }
        str++;
    }

    return iSml-iCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference is: %d", iRet);

    return 0;
}