public class arratofunc {
    private static void changed(int x) {
        x=10;
        System.out.println(x);
   }
    public static void main(String[] args) {
        int x=5;
        System.out.println(x);
        changed(x);
        System.out.println(x);
    }

    
}
