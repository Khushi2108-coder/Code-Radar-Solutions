#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        for(int j=(i+65)-1;j>=65;j--){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}