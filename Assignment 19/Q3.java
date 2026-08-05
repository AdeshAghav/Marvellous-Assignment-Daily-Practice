// Write a Program to check Whether a Number is Divisible by 5 and 11 or Not.

class Logic
{
    void checkDivisible(int num)
    {
        if((num % 5) == 0 && (num % 11) == 0)
        {
            System.out.println("Number is Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is Not Divisible by 5 and 11");
        }
    }
}

class Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}