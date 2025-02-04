#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=y*y;
    if(z==x*x){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}