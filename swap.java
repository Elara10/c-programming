import java.util.*;
class swap
{
    public static void main(String args[])
    {
        int tempvar;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter your first no.");
        int firstno=sc.nextInt();
        System.out.println("enter your second no.");
        int secondno=sc.nextInt();
        System.out.println("before swapping  numbers are:" +firstno+ " and " +secondno);
        tempvar=firstno;
        firstno=secondno;
        secondno=tempvar;
        System.out.println("\n  after swapping numbers are:"+firstno+ " and " +secondno);
    }
}


        