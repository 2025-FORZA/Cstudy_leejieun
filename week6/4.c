#include <stdio.h>

int main() {
    int N, M;
    char board[51][51];
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf(" %c", &board[i][j]);
        }
    }

    int paint = 64; 

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int white_start = 0;
            int black_start = 0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char c = board[i + x][j + y];
                    if ((x + y) % 2 == 0) {
                        if (c != 'W') white_start++;
                        if (c != 'B') black_start++;
                    }
                    else {
                        if (c != 'B') white_start++;
                        if (c != 'W') black_start++;
                    }
                }
            }
            int local_min = white_start < black_start ? white_start : black_start;
            if (local_min < paint) paint = local_min;
        }
    }

    printf("%d\n", paint);
    return 0;
}
