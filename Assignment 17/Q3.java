// Write a Program to find the Maximum of Two Numbers

class Logic
{
    void findMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println("Maximum Number is : "+ a);
        }
        else
        {
            System.out.println("Maximum Number is : "+ b);
        }
    }
}

class Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(20,15);
    }
}