public class subarrayprefixsum {
    public static void subarrayfun(int arr[]){
        int currentsum=0;
        int maxsum=Integer.MIN_VALUE;
        int prefixarr[]=new int[arr.length];
        prefixarr[0]=arr[0];
        for (int i = 1; i < prefixarr.length; i++) {
            prefixarr[i]=prefixarr[i-1]+arr[i];
        }
        for (int i = 0; i < arr.length; i++) {
            int start=i;
            for (int j = i; j < arr.length; j++) {
                int end=j;
                currentsum = start == 0 ? prefixarr[end] :prefixarr[end]-prefixarr[start-1];
                if(maxsum<currentsum){
                    maxsum=currentsum;
                }
            }
        }
             
        System.out.println(maxsum);
    }
    public static void main(String[] args) {
        int arr[]={1,-2,4,5,7,9};
        subarrayfun(arr);
    }
}
