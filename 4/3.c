#include <math.h>
#include <stdio.h>

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 10;
    int m;
    int numbers[100];
    int i;

    // �������������
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > numbers[i + 1]) {
            //swap(numbers[i],numbers[i-1]);
        }
    }

    for (i = 0; i < 9; i++) {
        for (m = 0; m < 9 - i; m++) {
            if (numbers[m] < numbers[m + 1]) {
                swap(&numbers[m], &numbers[m + 1]);
            }
        }
    }

    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]);
        if (m != 9) {
            printf(" ");
        }
    }
    return 0;
}
