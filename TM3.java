import java.util.Scanner;

class check{
    static void checkage(int age){
        if(age<18){
            System.out.println("Not Eligible to VOTE");
        }
        else {
            System.out.println("Eligible to VOTE");
        }
    }
}

public class TM3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Age");
        int a=sc.nextInt();
        check aa=new check();
        aa.checkage(a);
    }
}
