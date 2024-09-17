public class substring {
    public static String subarrayfunction(String str,int si,int ei){
        String s="";
        for (int i = si; i < ei; i++) {
            s += str.charAt(i);
        }
        return s;
    }
    public static void main(String[] args) {
    String str = "helloworld";
    String b= subarrayfunction(str, 0, 5) ;
    System.out.println(b);
    }
}
