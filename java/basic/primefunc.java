package java.basic;


import java.util.Scanner;

public class primefunc {
    public static boolean prime(int a){
        for (int i = 2; i < a; i++) {
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
       int input =sc.nextInt();
       boolean pri = prime(input);
       System.out.println(pri);
    }
}
