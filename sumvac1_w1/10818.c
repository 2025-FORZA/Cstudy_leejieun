#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int num;
    int min = -1000000
    int max = 1000000
     for (int num = 0; i <= N; ++i) {
            scanf("%d", &num)
            if (num >= min)  min = num;
            if (num <= max)  max = num;
        }

    print("%d %d\n", min, max);
    return 0;
}