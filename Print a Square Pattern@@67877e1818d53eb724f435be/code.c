#include<stdio.h>
int main(){
    int N,i,j;
    char c='*';
    scanf("%d",&N);
    for(i=1;i<N+1;i++){
        printf("%c ",c);
    }
    printf("\n");
    for(j=1;j<(i);j++){
        printf("%c ",c);
    }
    return 0;
}