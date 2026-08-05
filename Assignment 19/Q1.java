// Write a Program to Check Whether a given year is a Leap year or not.

class Logic
{
    void checkLeapYear(int year)
    {
        
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not a Leap Year");
        }
    }
}

class Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(1958);
    }
}