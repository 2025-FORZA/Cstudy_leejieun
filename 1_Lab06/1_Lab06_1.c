#include <stdio.h>
int main() {
	int N, sum = 0;
	char str[101];
	scanf("%d", &N);
	for (int i = 0; i < N;i++) {
		scanf("%s", str);
		sum += str[i] - '0';   //str[i] i번 문자 입력받기 & -'0'은 문자-> 숫자로 변환
	}             //str은 주소값이므로 &붙여서 입력받을 필요 없음

	printf("%d\n", sum);
	return 0;
}