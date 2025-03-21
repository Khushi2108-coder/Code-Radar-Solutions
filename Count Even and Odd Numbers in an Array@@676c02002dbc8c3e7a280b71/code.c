#include<stdio.h>
int main(){
    int n,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        if(i%2==0){
            c++;
        }
        else{
            d++;
        }
    }
    printf("%d %d",c,d);

}