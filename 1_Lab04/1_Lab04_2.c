
#include <stdio.h>

int main() {
	int T, A, B;

	// �׽�Ʈ ���̽� ���� �Է�
	scanf("%d", &T);

	// T��ŭ �ݺ�
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B); //�� �׽�Ʈ ���̽����� ���-> �ٹٲ� �ʿ�
	}

	return 0;
}
