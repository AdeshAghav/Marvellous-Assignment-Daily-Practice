// Write a program to find the Sum of Digits of a Number.

class Logic
{
    void sumOfDigits(int num)
    {
        int digit = 0;
        int sum = 0;

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;    
        }

        System.out.println("Sum of digits = " + sum);
    }
}

class Q1
{
    public static void main(String args[])
    {
        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);
    }
}