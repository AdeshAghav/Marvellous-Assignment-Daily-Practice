// Write a Program to Check Whether a Number is Prime or Not.

class Logic
{
    void CheckPrime(int num)
    {
        int i = 0;

        if(num <= 1)
        {
            System.out.println(" Not Prime Number");
            return;
        }

        for(i=2; i<num; i++)
        {
            if(num % i == 0)
            {
                System.out.println("Not Prime Number");
                return;
            }
        }

        System.out.println("Prime Number");
    }
}

class Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}