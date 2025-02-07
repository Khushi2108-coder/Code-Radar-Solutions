#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        N=N*i;
        printf("x * %d = %d",i,N);
    }
    return 0;
}