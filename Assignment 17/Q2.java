// Write a program to check whether a Number is a Palindrome or Not

class Logic
{
    void checkPalindrome(int num)
    {
        int temp = num;
        int digit = 0;
        int rev = 0;

        while(num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }

        if(temp == rev)
        {
            System.out.println("Give Number is Palindrome Number...");        }
        else
        {
            System.out.println("Not a Palindrome Number...!");
        }
    }
}

class Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}