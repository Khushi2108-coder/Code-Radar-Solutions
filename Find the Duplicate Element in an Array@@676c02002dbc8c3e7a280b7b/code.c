#include<stdio.h>
int main(){
        int n;
        scanf("%d",&n);
        int arr[n],count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;i<i+1;i++){
                if(arr[i]==arr[j]){
                    count=count++;
                }
            }
        }
        printf("%d",count);
}

