/* Write a Program to Display the Grade of a Student based on Marks.
 Input:      Output:        

    82   -   Distinction   
    68   -  First Class   
    55   -  Second Class  
    40   -  Pass Class    
    20   -  Fail          
   120   -  Invalid Marks 

*/

class Logic
{
    void displayGrade(int marks)
    {
        if(marks < 0 || marks > 100)
        {
            System.out.println("Invalid Marks");
        }
        else if(marks >= 75)
        {
            System.out.println("Distinction");
        }
        else if(marks >= 60)
        {
            System.out.println("First Class");
        }
        else if(marks >= 50)
        {
            System.out.println("Second Class");
        }
        else if(marks >= 35)
        {
            System.out.println("Pass Class");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}