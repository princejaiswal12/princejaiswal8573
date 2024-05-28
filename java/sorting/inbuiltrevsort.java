package java.sorting;

import java.util.Arrays;
import java.util.Collections;
public class inbuiltrevsort {
    public static void main(String[] args) {
       Integer[] arr={3,2,4,1,5};//Integer
       Arrays.sort(arr,Collections.reverseOrder());
       for (int i = 0; i < arr.length; i++) {
        System.out.println(arr[i]);
       }
    }
}
