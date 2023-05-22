
import java .util.Scanner;
public class marks {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Calculating the marks of the students based on their CBSE subjects");
        System.out.println("Enter the marks of subjects within 100");
        System.out.println("Enter the marks of physics");
        int sub1=sc.nextInt();
        System.out.println("Enter the marks of chemistry");
        int sub2=sc.nextInt();
        System.out.println("Enter the marks of mathematics");
        int sub3=sc.nextInt();
        System.out.println("Enter the marks of biology");
        int sub4=sc.nextInt();
        System.out.println("Enter the marks of english");
        int sub5=sc.nextInt();
        int sub_total=sub1+sub2+sub3+sub4+sub5;
        float percentage=(sub_total/500)*100;
        //  int percentage=(sub_total/2);
        System.out.println("The total for all subjects is "+sub_total);

        
        System.out.println("The final CBSE percentage of the student is" + percentage);
    }
}


    
