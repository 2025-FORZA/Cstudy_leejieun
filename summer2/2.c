#include <stdio.h>

int main() {
    int tree[5];
    int i;

    // 5���� ���ڸ� �Է� �޴´�
    for (i = 0; i < 5; i++) {
        scanf("%d", &tree[i]);
    }

    while (1) {
        int after = 0;  // ���ڰ� �ٲ������ Ȯ��

        for (i = 0; i < 4; i++) {
            // ���� ���ڰ� �� ���ں��� ũ�� �ٲ۴�
            if (tree[i] > tree[i + 1]) {
                int before = tree[i];       // �� ���� ����
                tree[i] = tree[i + 1];          // �տ� ���� ���� �ֱ�
                tree[i + 1] = before;        // �ڿ� ���� �� ���� �ֱ�

                // ���� ���� �迭 ���
                printf("%d %d %d %d %d\n", tree[0], tree[1], tree[2], tree[3], tree[4]);

                after = 1;  // ���ڸ� �ٲ�ٰ� ǥ��
            }
        }

        // �� �̻� �ٲ� �� ���ٸ� ������ ���� �� �� ���߱�
        if (after == 0) {
            break;
        }
    }

    return 0;
}

