#include <stdio.h>
#include <string.h>
void swap (char *b, char *c);
int main() {
    char name[10][21];
    int i;
    int j;
    int m = 10;
    int k;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m -1 - j; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
            	for(k = 0 ; k < 20 ; k++){
            		swap(&name[i][k], &name[i + 1][k]);   
				}
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]);    
    }
    return 0;
}


void swap (char *b, char *c) {
    int temp;
    temp = *b;
    *b= *c;
    *c = temp;
}
