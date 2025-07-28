#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // 테스트 케이스 수 입력

    for (int _ = 0; _ < T; _++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);  // 층 수, 방 수, 몇 번째 손님

        if (1 <= H && H <= 99 && 1 <= W && W <= 99 && 1 <= N && N <= H * W) {
            int floor = N % H;
            int xx;

            if (floor == 0) {
                floor = H;
                xx = N / H;
            }
            else {
                xx = N / H + 1;
            }

            if (xx < 10) {
                printf("%d0%d\n", floor, xx);
            }
            else {
                printf("%d%d\n", floor, xx);
            }
        }
       
    }

    return 0;
}
