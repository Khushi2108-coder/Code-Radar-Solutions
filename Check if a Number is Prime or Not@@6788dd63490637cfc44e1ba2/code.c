#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i=2;i<=x;i=i+1){
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(a=1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}