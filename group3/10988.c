#include <stdio.h>
#include <string.h>
int main() {
	char ch[7];
	int result;
	int cnt=0;
	scanf("%c", &ch);
	for (int i = 0; i < strlen(ch)/2; i++) {
		if (ch[i] == ch[strlen(ch) - i]){
			cnt++;  //기준이 되는 인덱스를 중간으로 나누고 앞쪽이랑 뒤쪽을 비교
		}
		else { cnt = 0; }
	}
    result = (cnt>0) ? 1: 0;
	printf(result);
	return 0;
}