#include <stdio.h>

i#include <stdio.h>

int main() {
    int N, M;
    int contain[101];

    scanf("%d %d", &N, &M);


    for (int i = 1; i <= N; i++) {
        contain[i] = i;
    }

    // M ������
    for (int j = 0; j < M; j++) {
        int start, end;
        scanf("%d %d", &start, &end);

        // �ٱ��ϸ� �����´�: start���� end���� swap
        for (int i = 0; i < (end - start + 1) / 2; i++) {
            int temp = contain[start + i];
            contain[start + i] = contain[end - i];
            contain[end - i] = temp;
        }
    }

    // ��� ���
    for (int i = 1; i <= N; i++) {
        printf("%d ", contain[i]);
    }

    return 0;
}

