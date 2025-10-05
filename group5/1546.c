#include <stdio.h>

int main() {
	int N;
	double score[1000];
	double max=0.0,sum=0.0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max) { max = score[i]; }
	}
	for (int i = 0; i < N; i++) {		
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}
	double avg = sum / N;
	printf("%.2f\n", avg);
	return 0;
}