#include <stdio.h>

int up(int n, int place) {
    if (n < place) return n; // base case
    int remainder = n % place;
    if (remainder >= place / 2) {
        n = (n / place + 1) * place;
    }
    else {
        n = (n / place) * place;
    }
    return up(n, place * 10);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", up(N, 10));
    return 0;
}
