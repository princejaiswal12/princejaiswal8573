import java.util.*;

public class largest {
    public static int largestvalue(int number[]){
        int larv=Integer.MIN_VALUE;
        for (int i = 0; i < number.length; i++) {
            if(number[i]>larv){
                larv=number[i];
            }
        }
        return larv;
    }
    public static void main(String[] args) {
        int number[]={3,5,6,7,1,2};
        int l=largestvalue(number);
        System.out.println(l);  
    }
    
}
