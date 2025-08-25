#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double scores[1000];
    double max = 0.0;
    double sum = 0.0;

    for (int i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    for (int i = 0; i < N; i++) {
        scores[i] = (scores[i] / max) * 100;
        sum += scores[i];
    }

    printf("%.2f\n", sum / N);

    return 0;
}
