import java.util.Scanner;

public class TM9 {
    public static void main(String[] args) {
        System.out.println("Enter the String ");
        Scanner sc=new Scanner(System.in);
        String strr=sc.next();
        String ori=strr;
        String rev="";
        int len=ori.length();
        for (int i = len-1; i >=0; i--) {
            rev=rev+ori.charAt(i);
        }
        System.out.println(strr.toUpperCase());
        if(strr.equals(rev)){
            System.out.println("It is a plaindrome String");
        }
        else{
            System.out.println("Not plaindrome");
        }
        
    }
}
