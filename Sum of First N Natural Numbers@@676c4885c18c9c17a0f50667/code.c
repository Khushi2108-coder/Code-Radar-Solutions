#include <stdio.h>
int main() {
    int N,s=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        s=s+i;
        printf("%d",s);
    }
    return 0;
}