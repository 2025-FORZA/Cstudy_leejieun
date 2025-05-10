
#include <stdio.h>

int main() {
	int T, A, B;

	// 테스트 케이스 개수 입력
	scanf("%d", &T);

	// T만큼 반복
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B); //각 테스트 케이스마다 출력-> 줄바꿈 필요
	}

	return 0;
}
