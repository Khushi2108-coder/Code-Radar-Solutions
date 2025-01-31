#include <stdio.h>
int main() {
    float x,y,z;
    float a;
    scanf("%f %f %f",&x,&y,&z);
    a=(x+y+z)/3;
    printf("Average: %.2f", a);
    return 0;
}