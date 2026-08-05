// Write a Program to Print Numbers from N down to 1 in reverse order.

class Logic
{
    void printReverse(int n)
    {
        int i = 0;

        for(i = n; i>= 1; i--)
        {
            System.out.println(i);
        }
    }
}

class Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}