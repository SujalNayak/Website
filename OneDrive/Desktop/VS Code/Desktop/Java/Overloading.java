
public class Overloading 
{
    int pay, cod, upi, dc,cc;
    void getData()
    {
        System.out.println("Which payment method you will perfer???");
    }
    void cod()
    {
        System.out.println("PAYMENT RECEVIED!!!");
    }
    void dc(long cardnum, int cvv, String expdate)
    {
        System.out.println("Card Number = " +cardnum);
        System.out.println("CVV = " +cvv);
        System.out.println("Expire Date = " +expdate);
        System.out.println("PAYMENT RECEVIED!!!");
    }
    void cc(long cardnum, int cvv, String expdate)
    {
        System.out.println("Card Number = " +cardnum);
        System.out.println("CVV = " +cvv);
        System.out.println("Expire Date = " +expdate);
        System.out.println("PAYMENT RECEVIED!!!");
    }
    public static void main(String args[])
    {
        Overloading o = new Overloading();
        o.cod();
        o.dc(11110000, 352, "15-04-2025");
        o.cc(11110000, 352, "15-04-2025");
    }
}
