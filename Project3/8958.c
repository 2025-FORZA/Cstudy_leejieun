#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char arr[81];
        scanf("%s", arr);

        int consistence = 0;
        int sum = 0;
        for (int j = 0; j < strlen(arr); j++) {
            if (arr[j] == 'O') {
                consistence++;
                sum += consistence;
            }
            else {
                consistence = 0;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
