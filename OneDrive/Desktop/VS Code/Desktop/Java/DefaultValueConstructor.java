public class DefaultValueConstructor {
    byte b;
    short s;
    int i;
    float f;
    double d;
    long l;
    char c;
    boolean bb;
    void print()
    {
        System.out.println(b);
        System.out.println(s);
        System.out.println(i);
        System.out.println(f);
        System.out.println(d);
        System.out.println(l);
        System.out.println(c);
        System.out.println(bb);
    }
    public static void main(String args[])
    {
        DefaultValueConstructor dvc = new DefaultValueConstructor();
        dvc.print();
    }
}
