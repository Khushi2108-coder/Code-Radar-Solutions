#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<i+1;j++){
            printf("%d ",j+a); 
            // a++;
        }
        a++;
        printf("\n");
    }
    return 0;
}