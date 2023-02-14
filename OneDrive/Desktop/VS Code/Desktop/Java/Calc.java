import java.util.Scanner;

class Calc {
    public static void main(String args[]) {
        System.out.println("Welcome to Calculator");
        Scanner scr = new Scanner(System.in);
        int a, b;
        System.out.println("Enter two numbers");
        a = scr.nextInt();
        b = scr.nextInt();
        int c, choice;

        System.out.println("Enter what you want to do?");
        System.out.println("1 for add\n2 for Subtract\n3 for Multiplication\n4 for division");
        choice = scr.nextInt();
        switch (choice) {
            case 1:
                c = a + b;
                System.out.println("Add = " + c);
                break;
            case 2:
                c = a - b;
                System.out.println("Sub = " + c);
                break;
            case 3:
                c = a * b;
                System.out.println("Multi = " + c);
                break;
            case 4:
                c = a / b;
                System.out.println("Div = " + c);
                break;
            default:
                break;
        }
    }
}