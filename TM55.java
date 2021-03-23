class bank{
    double intrest(){
        return 4.00;
    }
}

class sbi extends bank{
    double intrest(){
        return 5.10;
    }
}
class icici extends bank{
    double intrest(){
        return 5.50;
    }
}
class kotak extends bank{
    double intrest(){
        return 6.40;
    }
}
class idbi extends bank{
    double intrest(){
        return 4.70;
    }
}


public class TM55 {
    public static void main(String[] args) {
        bank b=new bank();
        sbi b1=new sbi();
        icici b2=new icici();
        kotak b3=new kotak();
        idbi b4= new idbi();
        System.out.println("RBI Intrest Rate :  "+b.intrest());
        System.out.println("SBI Intrest Rate :  "+b1.intrest());
        System.out.println("ICICI Intrest Rate :  "+b2.intrest());
        System.out.println("KOTAK Intrest Rate :  "+b3.intrest());
        System.out.println("IDBI Intrest Rate :  "+b4.intrest());
        
    }
}
