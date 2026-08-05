// Write a Program to Display all Factors of a given Number.

class Logic
{
    void displayFactors(int num)
    {
        int i = 0;

        for(i = 1; i <= num ; i++)
        {
            if((num % i) == 0)
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
        obj.displayFactors(12);
    }
}