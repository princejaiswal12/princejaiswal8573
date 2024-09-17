public class searchinsortedmatrix {
    public static void main(String[] args) {
        int[][] mat={
            {10,20,30,40},
            {15,25,35,45},
            {27,29,37,48},
            {32,33,39,50}
        };
        int key =33;
        int i=0;
        int j=mat.length-1;
        while (i<mat.length&&j>=0) {
            if(mat[i][j]>key){
                j--;
            }
            if (mat[i][j]<key) {
                i++;
            }
            if(mat[i][j]==key){
                break;
            }
            
        }
        System.out.println(i+" "+ j);
    }
}
