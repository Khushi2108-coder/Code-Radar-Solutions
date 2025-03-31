#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1");
        return 0;
    }
    int arr[n],max=INT_MIN;smax=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if((max!=smax)&&(smax<arr[i])){
            smax=arr[i];
        }
    }
    if(smax==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",smax);
    }
}














