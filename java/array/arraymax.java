public class arraymax {
    public static void main(String[] args) {
        int[] arr={1,-2,5,7,9,3,10};
        int mx = Integer.MIN_VALUE;
        int smx =Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
        for (int i = 0; i < arr.length; i++) {
              if(arr[i]>smx && arr[i] < mx){
                smx=arr[i];
            }
        }
        System.out.println(mx);
        System.out.println(smx);
}
}
