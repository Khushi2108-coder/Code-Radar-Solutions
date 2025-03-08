#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<N;i++){
        for(int k=N-i+1;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int h=N;h>=1;h--){
        for(int v=1;v<N-h+1;v++){
            printf(" ");
        }
        for(int p=1;p<=2*h-1;p++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}