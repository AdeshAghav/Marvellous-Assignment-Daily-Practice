// Write a Program to Find the lagest Digit in a given Number.

class Logic
{
    void findLargestDigit(int num)
    {
        int iDigit = 0;
        int iLarge = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }

            num = num / 10;
        }

        System.out.println("The Largest Number is : "+iLarge);
    }
}

class Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}