#include <stdio.h>

int main() {

    int num[10], dup[10] ;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                dup=1;
            }
            else { 
                dup++;

            }
        }
    }
    return 0;
}

#include <stdio.h>
int main() {
    int arr[10];
    int remain[10];
    int count = 0;

    // 입력 받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        remain[i] = arr[i] % 42;
    }

    // 중복 체크 & count 증가
    for (int i = 0; i < 10; i++) {
        int duplicated = 0; // 중복 감지용 변수
        for (int j = 0; j < i; j++) {
            if (remain[i] == remain[j]) {
                duplicated = 1; // 중복이면 1
                break;
            }
        }
        if (duplicated == 0) { // 앞에 중복이 없을 때만 count 증가
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}


