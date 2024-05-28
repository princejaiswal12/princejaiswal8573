public class buyorsellstocks {
    public static void maxprofit(int[] price) {
        int buyprice=Integer.MAX_VALUE;
        int maxprofitis=0;
        for (int i = 0; i < price.length; i++) {
            if(buyprice<price[i]){
                int profit=price[i]-buyprice;
                maxprofitis=Math.max(maxprofitis,profit);
            }
            else buyprice=price[i];
        }
        System.out.println(maxprofitis);
    }
    public static void main(String[] args) {
        int[] price={7,1,5,3,6,4};
        maxprofit(price);
    }
}
