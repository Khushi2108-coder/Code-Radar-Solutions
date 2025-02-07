#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(i=1;i<=10;i++){
        x=x*i;
        printf("x * %d = %d",i,x);
    }
    return 0;
}