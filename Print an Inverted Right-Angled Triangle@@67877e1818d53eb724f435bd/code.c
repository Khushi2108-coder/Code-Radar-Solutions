#include<stdio.h>
int main(){
    int N;
    char c='*';
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        for(int j=1;j<i+1;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}