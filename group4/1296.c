#include <stdio.h>
#include <string.h>

int main() {
    char yeondu[101];
    int n;
    char teams[50][101];
    scanf("%s", yeondu);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", teams[i]);
    }
    // 팀 이름 리스트 정렬 (알파벳 순)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(teams[i], teams[j]) > 0) {
                char temp[101];
                strcpy(temp, teams[i]);
                strcpy(teams[i], teams[j]);
                strcpy(teams[j], temp);
            }
        }
    }
    int max_score = -1;
    char answer[101];
    int l = 0, o = 0, v = 0, e = 0;
    for (int i = 0; yeondu[i]; i++) {
        if (yeondu[i] == 'L') l++;
        else if (yeondu[i] == 'O') o++;
        else if (yeondu[i] == 'V') v++;
        else if (yeondu[i] == 'E') e++;
    }
    for (int i = 0; i < n; i++) {
        int L = l, O = o, V = v, E = e;
        for (int j = 0; teams[i][j]; j++) {
            if (teams[i][j] == 'L') L++;
            else if (teams[i][j] == 'O') O++;
            else if (teams[i][j] == 'V') V++;
            else if (teams[i][j] == 'E') E++;
        }
        int score = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
        if (score > max_score) {
            max_score = score;
            strcpy(answer, teams[i]);
        }
    }
    printf("%s\n", answer);
    return 0;
}

