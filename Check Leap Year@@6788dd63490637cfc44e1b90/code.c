#include <stdio.h>
int main(){
    int C;
    scanf("%d",&C);
    if((C%4==0 && C%100!=0) ||(C%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}