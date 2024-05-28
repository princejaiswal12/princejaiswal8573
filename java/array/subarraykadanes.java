public class subarraykadanes {
    public static void subarraykadaness(int arr[]){
        int currsum=0;
        int maxsum=Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            currsum=currsum+arr[i];
            if(currsum<0){
                currsum=0;
            }
            maxsum=Math.max(maxsum, currsum);
        }
        System.out.println(maxsum);
    }
    public static void main(String[] args) {
        int arr[]={-1,-2,4,-1,-2,5,1,-3};
        subarraykadaness(arr);
    }
}
