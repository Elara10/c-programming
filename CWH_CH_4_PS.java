
import java.util.Scanner;
public class CWH_CH_4_PS {
    public static void main(String args[])
    {
        double kilometers,miles;
        double conversionFactor=1.609344;
        System.out.println("Enter distance value in kilometers");
        Scanner input=new Scanner(System.in);
        kilometers=input.nextDouble();
        miles=kilometers/conversionFactor;
        System.out.println("The distance in Miles:"+miles);
    }
    
}
