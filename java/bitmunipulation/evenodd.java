public class evenodd {
    public static void evenorodd(int numb){
        int bit=1;
        if((numb&bit)==0){
            System.out.println("even number");
        }
        else System.out.println("odd number");
    }
    public static void main(String[] args) {
        evenorodd(3);
        evenorodd(13);
        evenorodd(6);
    }
}
