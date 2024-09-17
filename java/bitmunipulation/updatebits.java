public class updatebits {
    public static int setithbit(int n,int i){
        int bitmass=1<<i;
        return n|bitmass;
    }
    public static int clearIthBit(int n,int i){
        int bitmass=~(1<<i);
        return n&bitmass;
    }
    public static int updateitnbit(int n,int i,int newbit){
        // if (newbit==0) {
        //     return clearIthBit(n, i);          
        // }
        // else return setithbit(n, i);
        n=clearIthBit(n, i);
        int bitmass=newbit<<i;
        return n|bitmass;
    }

    public static void main(String[] args) {
        System.out.println(updateitnbit(10, 2, 0));
    }
}
