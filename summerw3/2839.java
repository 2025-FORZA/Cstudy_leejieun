import java.util.Scanner;

public class SugarDelivery {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        if (N >= 3 && N <= 100) {
            int left = N % 5;
            if (left == 1 || left == 2 || left == 3 || left == 4) {
                System.out.println(-1);
            }
            else {
                int box5 = N / 5;
                int box3 = left / 3;
                int leftbox = left % 3;
                int sum = box5 + box3 + leftbox;
                System.out.println(sum);

            }
        }
    }
}
//���ǹ����� �õ� ������ �ݷʵ� ���� ���� ������ ���� ���������� �ڵ常 ������