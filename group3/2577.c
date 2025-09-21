#include <stdio.h>
int main() {
	int a, b, c;
	int mul;
	int cnt = 0;
	scanf("%d\n %d\n %d", &a, &b, &c);
	mul = a * b * c;
	int mul[257];
	for (int i = 0; i < strlen(mul); i++) {
		if (mul[i] == 0) {
			cnt++;
		}

	}

}
