import java.util.Scanner;


public class TM2 {
    public static void main(String args[]) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number ");
        int c=sc.nextInt();
        evall(c);     
    }

public static void evall(int x)  
//public static void evall(int x)
{
   
    if(x%2==0){
        System.out.println("the number is even");
    }
    else{
        System.out.println("the number is odd");
    }

}
}