#include <stdio.h>
int main() {
    int cp;
    int sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(cp>sp){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}