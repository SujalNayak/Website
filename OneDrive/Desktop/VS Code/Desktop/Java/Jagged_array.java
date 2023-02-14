import java.util.Scanner;

public class Jagged_array {
    public static void main(String[] args) {
        int a[][] = new int[3][];
        a[0] = new int[3];
        a[1] = new int[4];
        a[2] = new int[2];
        int max[] = new int[3];
        int even[] = new int[10];
        int odd[] = new int[10];
        int maxsum[] = new int[3];
        Scanner scr = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < a[i].length; j++) {
                System.out.println("Enter value of : " + i + j);
                a[i][j] = scr.nextInt();
            }
        }
        int k = 0;
        int o = 0;
        int evensum = 0;
        int oddsum = 0;
        int rowindex = 0;
        int maxindex = 0;
        for (int i = 0; i < 3; i++) {
            max[k] = a[i][0];
            maxsum[k] = 0;
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j] + " ");
                if (a[i][j] % 2 == 0) {
                    even[o] = a[i][j];
                    evensum = evensum + a[i][j];
                } else {
                    odd[o] = a[i][j];
                    oddsum = oddsum + a[i][j];
                }
                if (a[i][j] > max[k]) {
                    max[k] = a[i][j];
                    rowindex = k;
                }
                o++;
                maxsum[k] = maxsum[k] + a[i][j];
            }
            System.out.println("");
            k++;
        }
        for (int i = 0; i < 3; i++) {
            System.out.println("Max elements of row " + i + " is " + max[i]);
        }
        System.out.println("max elements index is " + maxindex);
        System.out.println("Even Nuber of Array : ");
        for (int i = 0; i < even.length; i++) {
            System.out.println(even[i] + " ");
        }
        System.out.println("Sum of Even elements : " + evensum);
        System.out.println("Odd Nuber of Array : ");
        for (int i = 0; i < odd.length; i++) {
            System.out.println(odd[i] + " ");
        }
        System.out.println("Sum of Odd elements : " + oddsum);
        System.out.println("Max sum Value of row");
        int maximum = maxsum[0];
        for (int i = 0; i < 3; i++) {

            if (maxsum[i] > maximum) {
                maximum = maxsum[i];
                maxindex = i;
            }
        }
        System.out.println("Sum -> " + maximum);
        System.out.println("max index -> " + maxindex);
    }
}