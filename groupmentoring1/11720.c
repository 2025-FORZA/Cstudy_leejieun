#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    char arr[101];//\n포함이므로 100+1
    scanf("%d", &N);
    scanf("%s", arr);
    for (int j = 0; j < N; j++) {
        sum += arr[j] - '0';
    }
    printf("%d", sum);
    return 0;
}