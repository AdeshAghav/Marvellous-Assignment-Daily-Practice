// Write a Program to Print all odd Numbers up to N.

class Logic
{
    void printOddNumbers(int n)
    {
        int i = 0;

        for(i = 1; i <= n; i++)
        {
            if((i %2) != 0)
            {
                System.out.println(i);
            }
        }
    }
}

class Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}