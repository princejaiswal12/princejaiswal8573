package java.sorting;



public class countingsort {
    public static void countshort(int[] arr){
        int largest=Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            largest=Math.max(largest, arr[i]);
        }
        int[] count=new int[largest+1];
        for (int i = 0; i < arr.length; i++) {
            count[arr[i]]++;
        }
        for (int i = 0; i < count.length; i++) {
            System.out.print(count[i]);
        }
        System.out.println();
        int j=0;
        for (int i = 0; i < count.length; i++) {
            while (count[i]>0) {
                arr[j]=i;
                j++;
                count[i]--;
                
            }
        }
        for (int i = 0; i < count.length; i++) {
            System.out.println(count[i]);
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
        int[] arr={1,4,3,2,5};
        countshort(arr);
    }
}
