public class arraytofunctionn {
    public static void update(int array[]){
        for (int i = 0; i < array.length; i++) {
            array[i]++;
        }
    }
    public static void main(String[] args) {
        int array[]={97,98,99};
        update(array);
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }
}
