#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x==y) && (y==z) && (z==x)){
        printf("Equilateral");
    }
    else if(((x==y)&&(x!=z))||((y==z)&&(y!=x))||((x==z)&&(x!=y))){
        printf("Isosceles");
    }
    else{
        printf("scalene");
    }
    return 0;
}