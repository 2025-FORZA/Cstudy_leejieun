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
//조건문으로 시도 했으나 반례도 끝도 없고 오히려 더욱 복잡해지는 코드만 생성됨