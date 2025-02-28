#include<stdio.h>
#include <ctype.h>
int main(){
    char C;
    if(isalpha(C))
    {
        if((C=='a') || (C=='A') || (C=='E') || (C=='e') || (C=='I') ||(C='i') || (C=='O') || (C=='o') || (C=='U') || (C=='u')){
            printf("Vowel");
        }
        else{
            printf("Constant");
        }
    }
    else{
        printf("Special Character");
    }
}