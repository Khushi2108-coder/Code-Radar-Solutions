#include <stdio.h>
int main() {
    int x,a=0;
    scanf("%d",&x);
    for(int i=2;i<=(x-1);i=i+1){
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}