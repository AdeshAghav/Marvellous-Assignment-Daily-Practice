// Write a Program to Count how many Even and Odd Numbers are Present between 1 and N.

class Logic
{
    void countEvenOddRange(int n)
    {
        int i = 1;
        int iEven = 0;
        int iOdd = 0;

        while(i <= n)
        {
            if((i % 2) == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }

            i++;
        }

        System.out.println("The Count of Even Numbers are : "+iEven);
        System.out.println("The Count of Odd Numbers are : "+iOdd);
    }
}

class Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}