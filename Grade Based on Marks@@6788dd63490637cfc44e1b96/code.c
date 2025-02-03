#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("A");
    }
    else if(x>=80 && x<90){
        printf("B");
    }
    else if(70<=x && x<80){
        printf("C");
    }
    else if(60<=x && x<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}