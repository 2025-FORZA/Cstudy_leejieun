#include <stdio.h>

int main() {
    int num[8];
    int asc = 1, des = 1; // 처음엔 오름차순, 내림차순이라고 가정
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 7; j++) {
        if (num[j + 1] != num[j] + 1) asc = 0; //같지 않다면으로 더 간결하게 쓸 수 있음
        if (num[j + 1] != num[j] - 1) des = 0;
    }
    if (asc == 1) printf("ascending\n");
    else if (des == 1) printf("descending\n");
    else printf("mixed\n");
    return 0;
}
