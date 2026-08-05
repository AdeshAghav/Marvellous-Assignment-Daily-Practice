// Write a Program to Check Whether a Number is a Perfect Number or not.

class Logic
{
    void checkPerfect(int num)
    {
        int i = 0;
        int sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not Perfect Number");
        }
    }
}

class Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(28);
    }
}