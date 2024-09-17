public class stringbuilder {
    public static void main(String[] args) {
        StringBuilder sb =new StringBuilder("");
        for (char index = 'a'; index <= 'z'; index++) {
            sb.append(index);
        }
        System.out.println(sb);
    }
}
