#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // ��
    for (int i = 1; i <= N; i++) {
        // ���� �߾ӿ� ��ġ
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // �� ���: (2*i - 1)��
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // �Ʒ�
    for (int i = N - 1; i >= 1; i--) {
        // ���� �߾ӿ� ��ġ
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // �� ���: (2*i - 1)��
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0