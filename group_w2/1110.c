##include <stdio.h>
int main() {
    int N, temp, cycle = 0;
    scanf("%d", &N);
    temp = N;
    do {
        int left = temp / 10;
        int right = temp % 10;
        temp = (right * 10) + ((left + right) % 10);
        cycle++;
    } while (temp != N);
    printf("%d\n", cycle);
    return 0;
}
