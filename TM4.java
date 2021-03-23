class room{
    int breadth;
    int length;
    room(int x, int y){
        breadth=x;
        length=y;
    }
}
class cal extends room{
    int height;
    cal(int h,int l, int b){
        super(h,l);
        height=b;
    }
    int voulume(){
        return (length*height*breadth);
    }
}


public class TM4 {
    public static void main(String[] args) {
        cal r=new cal(14,12,10);
        System.out.println("The volume of the room is : "+r.voulume());
    }
}
