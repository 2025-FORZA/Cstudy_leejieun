#include <stdio.h>

int main() {
	long long min, max, x , squareNumber,i ,count =0 ;
	scanf("%lld %lld", &min, &max);        //�Է¹ޱ�
	for (int i = 2; i * i; i++) {
		squareNumber = i * i;
		if (x % squareNumber != 0 && min <= squareNumber && squareNumber <= max)
		{
			count++;
		}
	}
	printf("%lld", count );              //����ϱ�
	return 0;
}