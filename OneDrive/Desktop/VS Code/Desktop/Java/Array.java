import java.util.Scanner;

class Array
{
    public static void main(String args[])
    {
        int[] a = new int[5];
        Scanner scr = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            System.out.println("\nEnter number");
            a[i] = scr.nextInt();
        }
        for (int i = 0; i < 5; i++) {
            System.out.println("\n"+a[i]);
        }
        int max, min;
        System.out.println();
    }
}