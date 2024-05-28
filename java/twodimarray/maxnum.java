

import java.util.*;


public class maxnum {
    public static void maxnum(int[][] arr){
    int max=Integer.MIN_VALUE;
    for (int i = 0; i < arr.length; i++) {
        for (int  j = 0; j < arr[0].length; j++) {
            max=Math.max(max, arr[i][j]);
        }
    }
    System.out.print(max);
    }
    public static void main(String[] args) {
        int arr[][]=new int[3][3];
        Scanner sc=new Scanner(System.in);
        System.out.println("enter arr element");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                arr[i][j]= sc.nextInt();
            }
        
        }
        maxnum(arr);
        System.out.println();
    }
}
