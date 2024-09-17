public class patern {
    public static void main(String[] args) {
        int n=4;
        int m=n;
        for(int i=1;i<=n;i++){
            int l=n;
            m--;
            for(int j=1;j<=n;j++){
               
                for(int k=1;k<=m+1;k++){
                    System.out.print(l);
                }
                l--;
                
            } 
            System.out.print(" $");
            
        }
    }
}
