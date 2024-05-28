package java.basic;

import java.util.*;
public class input{
    
    public static void main(String args[]){
        
        Scanner sc= new Scanner(System.in);
        String inp=sc.next();//after space it does not consider string
        System.out.println(inp);

        // String name= sc.nextLine();
        // System.out.print(name);
         
        int r= sc.nextInt();
        System.out.print(r);
    }
}