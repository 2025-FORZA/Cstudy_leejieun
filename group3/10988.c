#include <stdio.h>
#include <string.h>
int main() {
	char ch[7];
	int result;
	int cnt=0;
	scanf("%c", &ch);
	for (int i = 0; i < strlen(ch)/2; i++) {
		if (ch[i] == ch[strlen(ch) - i]){
			cnt++;  //������ �Ǵ� �ε����� �߰����� ������ �����̶� ������ ��
		}
		else { cnt = 0; }
	}
    result = (cnt>0) ? 1: 0;
	printf(result);
	return 0;
}