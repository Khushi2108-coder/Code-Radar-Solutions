#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,sum1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-2;i++){
        sum=sum+arr[i];
    }
    sum1=(n*(n+1))/2;
    int number=sum1-sum;
    printf("%d",number);


}

