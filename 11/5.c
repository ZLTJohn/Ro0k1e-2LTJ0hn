
#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("1.in", "r", stdin);
    int arr[505];
    char str[505];
    int bits[505];
    char result[505];

    char input;
    int j = 0;

    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }

    while (scanf("%c", &input) != EOF) {
        char str[2] = "\0";
        str[0] = input;
        if (strcmp(str, "\n") == 0) {
            break;
        } 
        arr[(j + 1) % 32] += (int)(input);
        j++;
    }

    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }

    for (int i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }
    return 0;
}
