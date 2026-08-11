#include<stdio.h>
#include<ctype.h>

void DisplaySchedule(char chDiv)
{
    chDiv = toupper(chDiv);

    switch(chDiv)
    {
        case 'A':
            printf("Your Exam at 7 AM");
            break;

        case 'B':
            printf("Your Exam at 8:30 AM");
            break;

        case 'C':
            printf("Your Exam at 9:20 AM");
            break;

        case 'D':
            printf("Your Exam at 10:30 AM");
            break;

        default:
            printf("Invalid Division..!");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}