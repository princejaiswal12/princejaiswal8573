
public class digonalsum {
    public static void main(String[] args) {
        int[][] arr={
            {1,2,3},
            {5,6,7},
            {9,10,11},
        
        };
        // time complexity n^2
        int sum =0;
        // for (int i = 0; i < arr.length; i++) {
        //     for (int j = 0; j < arr.length; j++) {
        //      if (i==j) {
        //         sum=sum+arr[i][j];
        //      }   
        //     else if(i+j==arr.length-1){
        //         sum=sum+arr[i][j];
        //     }
        //     }
        // }
        // System.out.println(sum);
         
        // time complixxity nlogn
        for (int i = 0; i < arr.length; i++) {
            sum=sum+arr[i][i];
            if (i!=arr.length-1-i) {
                sum=sum+arr[i][arr.length-1-i];
            };
        }
        System.out.println(sum);

    }
    
}
