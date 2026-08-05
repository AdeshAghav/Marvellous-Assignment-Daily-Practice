// Write a Program to Count total Number of Factors of a given number.

class Logic
{
    void countFactors(int num)
    {
        int fCount = 0;
        int i = 0;

        for(i = 1; i <= num; i++)
        {
            if((num % i) == 0)
            {
                fCount++;
            }
        }

        System.out.println("The Count of factors is : "+fCount);
    }
}

class Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(6767);
    }
}