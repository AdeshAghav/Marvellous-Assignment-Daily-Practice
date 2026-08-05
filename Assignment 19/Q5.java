// Write a Program to Calculate the Power of a NUmber using Loops.

class Logic
{
    void calculatePower(int base, int exp)
    {
        int i = 0;
        int power = 1;

        for(i = 1; i <= exp; i++)
        {
            power = power * base;
        }

        System.out.println("Power is : " + power);
    }
}

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}