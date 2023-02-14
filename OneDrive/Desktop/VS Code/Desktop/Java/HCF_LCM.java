import java.util.Scanner;

public class HCF_LCM {
    // public static void main(String[] args) {
    // Scanner scr = new Scanner(System.in);
    // System.out.println("Enter two numbers: ");
    // int a = scr.nextInt();
    // int b = scr.nextInt();
    // int temp1 = a;
    // int temp2 = b;
    // int temp;
    // while (temp2 != 0) {
    // temp = temp2;
    // temp2 = temp1 % temp2;
    // temp1 = temp;
    // }
    // int hcf = temp1;
    // int lcm = (a * b) / hcf;
    // System.out.println("Highest Common Factor = " + hcf);
    // System.out.println("Least Common Multiplier = " + lcm);

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.println("Enter a range: ");
        int a = scr.nextInt();
        int b = scr.nextInt();
        // int max = a > b ? a : b;
        // int lcm = 0, i = max, count = 0;
        // while (true) {

        // if (i % a == 0 && i % b == 0) {
        // lcm = i;
        // break;
        // }
        // i += max;
        // count++;
        // }

        // System.out.println("LCM = " + lcm);
        // System.out.println("Count = " + count);
        // int i = 2, flag = 0;
        // while (i < a) {
        // if (a % i != 0) {
        // i++;
        // flag = 1;
        // } else {
        // flag = 0;
        // break;
        // }
        // }
        // if (flag == 0) {
        // System.out.println(a + " is not a PRIME Number");
        // }
        // else {
        // System.out.println(a + " is a PRIME Number");
        // }
        int flag;
        for (int i = a; i <= b; i++) {
            flag = 0;
            for (int k = 2; k <= i / 2; k++) {
                if (i % k == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(i);
            }
        }
    }
}
