#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    int arr[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);

}
