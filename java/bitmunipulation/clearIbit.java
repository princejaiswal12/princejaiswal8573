public class clearIbit {
    public static int  clearIbit(int n,int i){
        int bitmas= (~0)<<i;
        return n & bitmas;
    }
    public static void main(String[] args) {
        System.out.println(clearIbit(15,2));
    }
}
