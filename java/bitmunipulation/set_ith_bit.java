public class set_ith_bit {
    public static int setithbit(int n,int i){
        int bitmass=1<<i;
        return n|bitmass;
    }
    public static void main(String[] args) {
        System.out.println(setithbit(10, 2));
    }
}
