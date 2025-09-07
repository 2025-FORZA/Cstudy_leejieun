#include <stdio.h>

int main() {
    int score;
    char  A, B, C, D, F;
    scanf("%d", &score);
    if (score >= 90) {
        printf("%s", A);
    }
    else if(score >= 80){
        printf("%s", B);
    }
    else if(score >= 70) {
        printf("%s", C);
    }
    else if (score >= 70) {
        printf("%s",D);

    }
    else  {
        printf("%s", F);

    }
    return 0;
}