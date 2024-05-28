public class subarray {
    public static void subarrayfun(int array[]){
        int largest=Integer.MIN_VALUE;
        int smallest=Integer.MAX_VALUE;
        for (int i = 0; i < array.length; i++) {
            
            int start=i;
            for (int j = i; j < array.length; j++) {
                int end=j;
                int sum=0; 
                for (int k = start; k <=end; k++) {
                    System.out.print(array[k]+" ");
                    
                    sum=sum+array[k];
                    if(largest<sum){
                        largest=sum;
                    }
                    if(smallest>sum){
                        smallest=sum;
                    }
                }
                System.out.print("="+sum);
                System.out.println();
                

            }
            System.out.println();
            
        }
        System.out.println("max sum="+largest);
        System.out.println("min sum="+smallest);
    }
    public static void main(String[] args) {
        int array[]={2,4,6,8,10};
        subarrayfun(array);
    }
}
