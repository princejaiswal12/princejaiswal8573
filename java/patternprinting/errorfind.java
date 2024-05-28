import java.util.*;
public class errorfind {
    
        public static void main(String[] args) {
            System.out.print("size of array");
            Scanner sc = new Scanner(System.in);
            int size = sc.nextInt();
            int[] arr = new int[size];
            for (int i = 0; i < size; i++) {
                arr[i] = sc.nextInt();
                System.out.print(arr[i] + " ");
            }
        }
     }
    

