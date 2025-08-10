
import java.util.Scanner;

public class Multiplication {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n1 = scanner.nextInt();
        int n2 = scanner.nextInt();
        if (n1 >= 100 && n2 >= 100) {

            int one = n2 % 10;
            int ten = (n2 / 10) % 10;
            int hundred = n2 / 100;
            int n3 = n1 * one;
            int n4 = n1 * ten;
            int n5 = n1 * hundred;
            int n6 = n1 * n2;
            System.out.println(n3);
            System.out.println(n4);
            System.out.println(n5);
            System.out.println(n6);
        }

    }
}