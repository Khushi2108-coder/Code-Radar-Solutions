#include<stdio.h>
int main(){
    int N,a=1,b=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<i+1;j++){
            if(i%2==0){
                if(j%2==0){
                    printf("%d",a);
                }
                else{
                    printf("%d",b);
                }

            }
            else{
                if(j%2==0){
                    printf("%d",b);
                }
                else{
                    printf("%d",a);
                }
            }
        }
        printf("\n");
    }
    return 0;
}