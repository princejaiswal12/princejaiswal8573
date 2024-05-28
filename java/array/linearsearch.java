public class linearsearch {
    public static int linearsearchfun(int number[],int key){
        for (int i = 0; i < number.length; i++) {
            if(number[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int number[]={5,6,3,10,23,53,7,14};
        int key=10;
        int l=linearsearchfun(number,key);
        if(l==-1){
            System.out.println("not found");
        }
        else System.out.println(l);
    }
}
