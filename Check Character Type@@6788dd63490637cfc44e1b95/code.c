#include<stdio.h>
#include <ctype.h>
int main(){
    char C;
    scanf("%c",&C);
    if(isalpha(C))
    {
        if((C=='a') || (C=='A') || (C=='E') || (C=='e') || (C=='I') ||(C=='i') || (C=='O') || (C=='o') || (C=='U') || (C=='u')){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if{(isdigit(C))
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}