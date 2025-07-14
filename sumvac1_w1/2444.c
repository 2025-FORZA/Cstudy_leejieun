#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 위
    for (int i = 1; i <= N; i++) {
        // 별을 중앙에 위치
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // 별 출력: (2*i - 1)개
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 아래
    for (int i = N - 1; i >= 1; i--) {
        // 별을 중앙에 위치
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // 별 출력: (2*i - 1)개
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0