#include<stdio.h>
int main(){
    int N;
    char c='*';
    scanf("%d",&N);
    for(int i=1;i<(N+1);i++){
        for(int k=i;k<N;k++){
           printf(" ");
        }
        for(int j=1;j<((2*i-1)+1);j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}