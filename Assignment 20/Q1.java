// Write a program to find the sum of all Even Numbers up to N.

class Logic
{
    void sumEvenNumbers(int n)
    {
        int i = 0;
        int iEven = 0;

        for(i=1; i<=n; i++)
        {
            if((i % 2) == 0)
            {
                iEven = iEven + i;
            }
        }
        System.out.println("Sum of all Even Numbers: "+iEven);
    }
}

class Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(6);
    }
}