// Write a Program to find the Minimum of three Numbers.

class Logic
{
    void findMin(int a, int b, int c)
    {
         if((a < b) && (a < c))
        {
            System.out.println("Minimum Number is : " + a);
        }
        else if((b < a) && (b < c))
        {
            System.out.println("Minimum Number is : " + b);
        }
        else
        {
            System.out.println("Minimum Number is : " + c);
        }
    }
}

class Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}