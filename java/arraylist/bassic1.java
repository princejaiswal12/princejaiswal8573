

import java.util.ArrayList;

public class bassic1 {
    public static void main(String[] args) {
    ArrayList<Integer> arr=new ArrayList<>(6);
    arr.add(0, 50);
    arr.add(1, 50);
    arr.add(2, 50);
    arr.add(3, 50);
    arr.add(4, 50);
    arr.add(5, 50);
    System.out.println(arr);
    arr.set(3, 230);
    System.out.println(arr);
    }
}
