#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int  dp[1000001];  //인덱스는 0부터 10만까지이므로 선언은 1000001으로 해줘야하는 것

    dp[1] = 0; //1일때는 그 자체이므로 케이스 분류

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;  //가장 간단한 점화식 생성
        if (i % 2 == 0) {  //점화식 수행 중 i가 2로 나눠질 경우 실행
            if (dp[i] > dp[i / 2] + 1)
                dp[i] = dp[i / 2] + 1;
        }
        if (i % 3 == 0) {  //점화식 수행 중 i가 3으로 나눠질 경우 실행
            if (dp[i] > dp[i / 3] + 1)
                dp[i] = dp[i / 3] + 1;
        }
    }

    printf("%d\n", dp[n]);
    return 0;
}
