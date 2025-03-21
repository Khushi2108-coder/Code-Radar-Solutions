#include <stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if((x>0) && (y>0)){
        prntf("False");
    }
    else{
        printf("True");
    }
    return 0;
}