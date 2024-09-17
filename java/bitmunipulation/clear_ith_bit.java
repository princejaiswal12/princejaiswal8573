public class clear_ith_bit {
    public static int clearIthBit(int n,int i){
        int bitmass=~(1<<i);
        return n&bitmass;
    }
    public static void main(String[] args) {
        System.out.println(clearIthBit(10, 1));
    }
}
