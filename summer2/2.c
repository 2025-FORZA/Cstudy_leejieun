#include <stdio.h>

int main() {
    int tree[5];
    int i;

    // 5개의 숫자를 입력 받는다
    for (i = 0; i < 5; i++) {
        scanf("%d", &tree[i]);
    }

    while (1) {
        int after = 0;  // 숫자가 바뀌었는지 확인

        for (i = 0; i < 4; i++) {
            // 앞의 숫자가 뒤 숫자보다 크면 바꾼다
            if (tree[i] > tree[i + 1]) {
                int before = tree[i];       // 앞 숫자 저장
                tree[i] = tree[i + 1];          // 앞에 작은 숫자 넣기
                tree[i + 1] = before;        // 뒤에 원래 앞 숫자 넣기

                // 현재 나무 배열 출력
                printf("%d %d %d %d %d\n", tree[0], tree[1], tree[2], tree[3], tree[4]);

                after = 1;  // 숫자를 바꿨다고 표시
            }
        }

        // 더 이상 바뀐 게 없다면 정렬이 끝난 것 → 멈추기
        if (after == 0) {
            break;
        }
    }

    return 0;
}

