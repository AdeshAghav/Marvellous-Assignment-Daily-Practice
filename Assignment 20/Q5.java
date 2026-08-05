// Write a Program to find the smallest digit in a given Number.

class Logic
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0;
        int iSmall = num % 10;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iSmall > iDigit)
            {
                iSmall = iDigit;
            }

            num = num / 10;
        }

        System.out.println("The Smallest Number is :"+iSmall);
    }
}

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}