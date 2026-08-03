// Write a Program to Print the Multiplication Table of a Number.

class Logic
{
    void printTable(int num)
    {
        int i = 0;

        for(i = 1; i <= 10; i++)
        {
            System.out.println(num + " X " + i + " = " + (num * i));
        }
    }
}

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}