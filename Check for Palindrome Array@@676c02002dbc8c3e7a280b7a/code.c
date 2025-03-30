#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[n],temp,tempp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        brr[i]=arr[(n-1)-i];
    }
    for(int i=0;i<n;i++){
        temp=brr[i];
        tempp=arr[i];
    }
    if(temp==tempp){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }


}







