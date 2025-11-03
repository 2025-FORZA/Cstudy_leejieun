#include <stdio.h>

int main(void) {
    int arr[31] = { 0 };  // 인덱스 1~30만 사용
    int num;
    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);  // 번호 입력
        arr[num] = 1;       // 제출한 학생 표시
    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0)     // 제출하지 않은 학생
            printf("%d\n", i); // 번호 출력
    }
    return 0;
}