public class shortestpath {
    public static void main(String[] args) {
        String str="WNEENESENNN";
        int x=0;
        int y=0;
        for (int index = 0; index < str.length(); index++) {
            if(str.charAt(index)=='E'){
                x++;
            }
            if(str.charAt(index)=='W'){
                x--;
            }
            if(str.charAt(index)=='N'){
                y++;
            }
            if(str.charAt(index)=='S'){
                y--;
            }
        }
        int s=x*x+y*y;
            double z=Math.sqrt(s);
            System.out.println(z);
    }
}
