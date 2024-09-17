public class oopsBasic {
    public static void main(String[] args) {
        pen p1 = new pen(); //creating a pen object p1
        p1.setcolour("blue");
        System.out.println(p1.color);
        p1.settip(5);
        System.out.println(p1.tip);
        p1.color = "red";
        System.out.println(p1.color);
        bankAccount Myacc = new bankAccount();
        Myacc.username = "Prince Jaiswal";
        // Myacc.password = "abcdefgh"; //give error
        Myacc.SetPassoward("apple");
        

    }
}
class bankAccount {
    public String username;
    private String password;
    public void SetPassoward(String pwd){
        password=pwd;
    }
}
 
class pen {
    String color;
    int tip;

    void setcolour(String newColour){
        color = newColour;
    }
    void settip(int newTip){
        tip = newTip;
    }
}
class student {
    String name;
    int rollno;
    float percentage;
    void calcPercentage(int math ,int chem ,int phy){
        percentage = (math + chem + phy)/3;
    }
}