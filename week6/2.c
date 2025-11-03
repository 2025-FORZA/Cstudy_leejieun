#include <stdio.h>

int main() {
    char s[101];
    int cnt[10] = { 0 };
    int i, len, need = 0, max = 0;

    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++) {
        cnt[s[i] - '0']++;
    }

    need = (cnt[6] + cnt[9] + 1) / 2;
    cnt[6] = cnt[9] = need;


    for (i = 0; i < 10; i++) {
        if (cnt[i] > max) max = cnt[i];
    }

    printf("%d\n", max);
    return 0;
}