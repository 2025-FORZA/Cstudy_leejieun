#include <stdio.h>
int main() {
	int N, sum = 0;
	char str[101];
	scanf("%d", &N);
	for (int i = 0; i < N;i++) {
		scanf("%s", str);
		sum += str[i] - '0';   //str[i] i�� ���� �Է¹ޱ� & -'0'�� ����-> ���ڷ� ��ȯ
	}             //str�� �ּҰ��̹Ƿ� &�ٿ��� �Է¹��� �ʿ� ����

	printf("%d\n", sum);
	return 0;
}