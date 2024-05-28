public class trapwat {
    public static void trapingrainwateris(int height[]){
        int[] rightmax=new int[height.length];
        rightmax[0]=height[0];
        for (int i = 1; i < rightmax.length; i++) {
            rightmax[i]=Math.max(height[i], rightmax[i-1]);
        }
        for (int i = 0; i < rightmax.length; i++) {
            System.out.print(rightmax[i]);
        }
        System.out.println();
        int[] leftmax=new int[height.length];
        leftmax[height.length-1]=height[height.length-1];
        for (int i = rightmax.length-2; i >=0;i--) {
            leftmax[i]=Math.max(height[i], leftmax[i+1]);
        }
        for (int i = 0; i < rightmax.length; i++) {
            System.out.print(leftmax[i]);
        }
        System.out.println();
        int trapwater=0;
        for (int i = 0; i < leftmax.length; i++) {
            trapwater+=(Math.min(rightmax[i], leftmax[i])-height[i]);
        }
        System.out.println(trapwater);

    }
    public static void main(String[] args) {
        int[] height={4,2,0,6,3,2,5};
        trapingrainwateris(height);
    }}
