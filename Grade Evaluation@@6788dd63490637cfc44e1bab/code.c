#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x='A'){
        printf("Exellent");
    }
    else if(x='B'){
        printf("Good");
    }
    else if(x='c'){
        printf("Average");
    }
    else if(x='D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}