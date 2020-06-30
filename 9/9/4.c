#include <stdio.h>

int main() {
int n,i;
    int sum = 0;
    int arr[50];
    scanf("%d",&n);
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
for (i = 5; i <= n; i++) {
        
          arr[i] = arr[i-2] +arr[i-3];
    sum += 1;
    
    }
    printf("%d",arr[n]);
    return 0;
}
