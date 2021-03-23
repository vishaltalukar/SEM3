import java.util.Scanner;
public class TM5 {
static int overs(int x, int y){
    return x+y;
}

static int overs(int x,int y,int z){
    return x+y+z;
}
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any three Positive number ");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        System.out.println("Call with 2 input");
        System.out.println("Add = "+overs(a,b));
        System.out.println("Call with three input");
        System.out.println("Add = "+overs(a,b,c));
       
    }
}
