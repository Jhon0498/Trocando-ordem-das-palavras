#include <stdio.h>

void removeDuplicates(char str[]) {
    int start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int j;
        for (j = 0; j < start && str[i] != str[j]; j++) {}

        if (j == start) {
            str[start] = str[i];
            start++;
        }
    }

    str[start] = '\0';
}

int main() {
    char str[] = "hello, world!";
    printf("Input: %s\n", str);

    removeDuplicates(str);

    printf("Output: %s\n", str);

    return 0;
}