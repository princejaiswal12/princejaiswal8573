public class palindrome {
    public static void main(String[] args) {
        String str ="racecar";
        boolean s=true;
        for (int i = 0; i < str.length()/2; i++) {
            int n=str.length();
            if(str.charAt(i)!=str.charAt(n-1-i)){
                System.out.println("not palidrome");
                s=false;
                break;
            }
        }
        if(s==true){
            System.out.println("is palindrome");
        }
    }
}
