#include<stdio.h>
int main(){

    char a;
    printf("enter a char: ");
    scanf("%s",&a);

    a=tolower(a);

    if (a == 'a' || a == 'e' || a== 'i' || a == 'o' || a == 'u') {
        printf("vowel");
    }
    else{
        printf("consonats");
    }


return 0;

}