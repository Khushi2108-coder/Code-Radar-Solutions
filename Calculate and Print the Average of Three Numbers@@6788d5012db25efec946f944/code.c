#include <stdio.h>
int main() {
    int x,y,z;
    float a;
    scanf("%d %d %d",&x,&y,&z);
    a=((x+y+z)/3);
    printf("Average: %.2f",a);
    return 0;
}