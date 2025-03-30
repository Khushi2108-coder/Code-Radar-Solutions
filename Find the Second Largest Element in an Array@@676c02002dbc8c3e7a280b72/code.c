#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1");
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if((smax<arr[i])&&(max!=arr[i])){
            smax=arr[i];
        }

    }
    if(smax==INT_MIN){
        smax=-1;
    }
    printf("%d",smax);
}