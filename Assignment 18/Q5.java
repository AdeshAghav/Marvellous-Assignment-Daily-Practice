// Write a Program to Check whether a Number is Positive, Negative, or Zero.

class Logic
{
    void CheckSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative");
        }
        else
        {
            System.out.println("Number is Zero");
        }
    }
}

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckSign(56);
    }
}