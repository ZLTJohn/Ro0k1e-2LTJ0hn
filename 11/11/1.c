#include <stdio.h>
#include <string.h>

int main() {
    int arr[32] = { 0 };
    char input[500];
    int bits[32];
    char result[33] = { 0 };
    int i = 1, j = 0;
    char c;
    while (scanf("%c", &c) != EOF) {
        if (c == '\n') {
            break;
        }
        input[i - 1] = c;
        arr[i % 32] = arr[i % 32] + (int)input[i - 1];
        i++;
    }

    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;
    }
    puts(result);
    return 0;
}