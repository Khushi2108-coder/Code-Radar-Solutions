#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k=N-i+1;k>1;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int h=1;h<N;h++){
        for(int d=1;d<h+1;d++){
            printf(" ");
        }
        for(int l=(N-(2*h-1))+1;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}