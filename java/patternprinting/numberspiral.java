// package java.patternprinting;

public class numberspiral {
    public static void main(String[] args) {
        int n =4;
        for (int i = 1; i <= 2*n-1; i++) {
            for (int j = 1; j <= 2*n-1; j++) {
                if(i==1||j==1){
                    System.out.print("1");
                }
                else if(i==2||j==2) System.out.print("2");
                else if(i==3||j==3) System.out.print("3");
                else if(i==4||j==4) System.out.print("4");
            }
            System.out.println();
        }
        
    }
}
