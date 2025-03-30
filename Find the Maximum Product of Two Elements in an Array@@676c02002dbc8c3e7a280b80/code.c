#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max; 
            max=arr[i];
        }
        else if((smax<arr[i])&&(smax!=max)){
            smax=arr[i];
        }
    }
    printf("%d",smax*max);
}