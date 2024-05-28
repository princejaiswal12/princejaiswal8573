package java.basic;


import java.util.*;
/**
 * prime
 */
public class prime {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int input=sc.nextInt();
        boolean a=true;
        for(int i=2;i<Math.sqrt(input);i++){
            if(input%i==0){
                a=false;
            }
        }
        if(a==true){
            System.out.println("prime number");
        }
        else{
            System.out.println("not");
        }

    }
}