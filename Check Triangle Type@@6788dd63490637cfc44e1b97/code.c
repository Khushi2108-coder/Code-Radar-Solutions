#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x==y) && (y==z) && (z==x)){
        printf("Equilateral");
    }
    if(((x==y) && (y==z) && (z!=x)) || ((y==z) && (z==x) && (x!=y)) || ((x==y) && (x==z) && (y!=z))){
        printf("Icosceles");
    }
    if(x!=y!=z){
        printf("Scalene");
    }
    return 0;
}