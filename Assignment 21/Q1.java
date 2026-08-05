// Write a Program to Calculate the Product of Digits of a Number.

class Logic
{
    void productofDigits(int num)
    {
        int iDigit = 0;
        int iPro = 1;

        while(num != 0)
        {
            iDigit = num % 10;
            
            iPro = iPro * iDigit;

            num = num / 10;
        }

        System.out.println("The Product is :"+iPro);
    }
}

class Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productofDigits(2314);
    }
}