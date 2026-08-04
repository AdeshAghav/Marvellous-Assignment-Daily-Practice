// Write a Program to find the Sum of Even and Odd Digits Separately in a Number.

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0, iEven = 0, iOdd = 0;
        while(num != 0)
        {
            iDigit = num % 10;

            if((iDigit % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }

            num = num / 10;
        }
        System.out.println("The Sum of Even Numbers is : "+iEven);
        
        System.out.println("The Sum of Odd Numbers is : "+iOdd);
    }
}

class Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}