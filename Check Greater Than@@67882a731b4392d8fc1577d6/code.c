#include <stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("True");
    }
    if(y>x){
        printf("False");
    }
    return 0;
}