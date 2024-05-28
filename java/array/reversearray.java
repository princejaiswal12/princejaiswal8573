public class reversearray {
    public static void reversearrayfun(int array[]){
        int start=0;
        int end=array.length-1;
        while (start<end) {
            int temp=array[start];
            array[start]=array[end];
            array[end]=temp;

            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        int array[]={2,3,5,6,7,10,11};
        reversearrayfun(array);
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+" ");
        }
    }
}
