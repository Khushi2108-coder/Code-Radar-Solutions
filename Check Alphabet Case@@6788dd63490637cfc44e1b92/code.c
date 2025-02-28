#include <stdio.h>
int main(){
    char d;
    scanf("%c",&d);
    if(d>='a' && d<='z'){
        printf("Lowercase");
    }
    else if(d>='A' && d<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}