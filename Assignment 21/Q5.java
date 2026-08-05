// Write a Program to Print all Numbers from 1 to N that are divisible by both 2 and 3.

class Logic
{
    void printDivisibleBy2and3(int n)
    {
        int i = 0;

        for(i = 1; i <= n; i++)
        {
            if((i % 2) == 0 && (i % 3) == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}