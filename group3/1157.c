#include <stdio.h>
int main() {
    char arr[7];
    char x;
    int cnt;
    scanf("%c", &x);
    for (int i = 0; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }
    }

    char ch = ch - ('a' - 'A');
    printf("%c", ch);
    return 0;
}