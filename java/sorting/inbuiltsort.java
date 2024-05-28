package java.sorting;


import java.util.Arrays;

public class inbuiltsort {
   public static void main(String[] args) {
    int[] arr={3,4,2,1,5};
    Arrays.sort(arr);
    for (int i = 0; i < arr.length; i++) {
        System.out.println(arr[i]);
    }
   }
}
