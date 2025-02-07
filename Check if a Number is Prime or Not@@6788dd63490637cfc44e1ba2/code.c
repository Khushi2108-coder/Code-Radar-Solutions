#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a=0;
    for(i=2;i<=x;i++){
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}