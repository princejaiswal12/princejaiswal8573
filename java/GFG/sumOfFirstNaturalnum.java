import java.util.*;
public class sumOfFirstNaturalnum {
    public static void main(String[] args) {
        System.out.print("enter the number");
        Scanner sc= new Scanner(System.in);
        Integer input=sc.nextInt();
        int b=0;
        for (int i = 0; i < input; i++) {
            b=b+i;
        }
        System.out.println(b);
    
        
    }
}
