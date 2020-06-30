#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("1.in", "r", stdin);
    int arr[35] = { 0 };
    char input[505];
    int bits[35];
    char result[35];
    int i = 1, j = 0;
    for (j = 0; j < 33; j++) arr[j] = 0;
    while (scanf("%c\n", &input[i - 1]) != EOF) {
        arr[i % 32] = arr[i % 32] + (int)input[i - 1];
        i++;
    }

    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;
    }
    
    result[33] = 0;
    puts(result);
    return 0;
}
