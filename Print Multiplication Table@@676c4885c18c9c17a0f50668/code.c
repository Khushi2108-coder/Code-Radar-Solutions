#include <stdio.h>
int main() {
    int N,p;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        p=N*i;
        printf("%d x %d = %d\n",N,i,p);
    }
    return 0;
}