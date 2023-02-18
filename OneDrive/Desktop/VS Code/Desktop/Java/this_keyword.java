
class A{
    A()
    {
        System.out.println("A Default constructor");
    }
    A(int x)
    {
        this();
        System.out.println("A Parameterized Constructor");
    }
}


public class this_keyword {
    public static void main(String[] args) {
        A a = new A(5);
    }    
}
