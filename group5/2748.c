#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long f1 = 0, f2 = 1, f3 = 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }
    else if (n == 1) {
        printf("1\n");
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    printf("%lld\n", f3);
    return 0;
}

    



