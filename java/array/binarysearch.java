
public class binarysearch {
    public static int binarysearchfunc(int number[],int key){
        int start=0;
        int end=number.length-1;
        while (start<=end) {
            int mid=(start+end)/2;
            if(number[mid]==key){
                return mid;
            }
            if(key<number[mid]){ //left
                end=mid-1;
            }
            else start=mid+1;
        }
        return -1;
    }
    public static void main(String[] args) {
      int number[]={3,4,5,10,13,15,17}; //for shorted array only
      int key=17;
      System.out.println(binarysearchfunc(number, key));

    }
}
