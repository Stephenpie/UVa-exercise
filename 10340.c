#include <stdio.h>

int main(int argc, char *argv[]) {
    char S[100000], T[100000];
    while (scanf("%s%s", S, T) != EOF) {
        int isMatch = 0;
        int i, j = 0;
        for (i = 0; T[i] != '\0'; i++) {
            if (S[j] == T[i]) j++;
            if (S[j] == '\0') {
                isMatch = 1;
                break;
            }
        }
        printf("%s\n", isMatch ? "Yes" : "No");
    }
    return 0;
}