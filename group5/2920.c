#include <stdio.h>

int main() {
    int num[8];
    int asc = 1, des = 1; // ó���� ��������, ���������̶�� ����
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 7; j++) {
        if (num[j + 1] != num[j] + 1) asc = 0; //���� �ʴٸ����� �� �����ϰ� �� �� ����
        if (num[j + 1] != num[j] - 1) des = 0;
    }
    if (asc == 1) printf("ascending\n");
    else if (des == 1) printf("descending\n");
    else printf("mixed\n");
    return 0;
}
