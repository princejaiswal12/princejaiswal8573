import java.util.ArrayList;
public class basic {
   public static void main(String[] args) {
    ArrayList<Integer> arr=new ArrayList<>();
    arr.add(90);
    System.out.println(arr +" "+ arr.size());
    arr.add(50);
    System.out.println(arr +" "+ arr.size());
    arr.add(70);
    System.out.println(arr +" "+ arr.size());
    arr.add(70);
    System.out.println(arr +" "+ arr.size());
    arr.remove(1);
    System.out.println(arr +" "+ arr.size());
    
} 
}
