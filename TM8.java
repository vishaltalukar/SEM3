//import.java.lang.Exception;

class Myexp extends Exception{
    Myexp(String message){
        super(message);
    }
}

  
public class TM8 {

    public static void main(String[] args) {
        
        //int a[]=new int[2];
        String name="ABCD";
         int bank=500;
         
        System.out.println("Name is : "+name);
        withdraw(bank,500);
    }
    public  static void withdraw(int bank,int x){
        try {
            if((bank-x==0)){
                throw new Myexp("Maintain Minimun balance");
            }
        } catch (Myexp e) {
            System.out.println(e.getMessage());
            //TODO: handle exception
        }
    }   
}
