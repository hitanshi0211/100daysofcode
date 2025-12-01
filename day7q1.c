#include<stdio.h>
int main(){

    int a;
    printf("enter a year :");
    scanf("%d",&a);

    if((a%4==0 && a%100!= 0)|| (a%400==0)){
        printf("its a leap year");
    }
    else{
        printf("not a leap year");
    }










    return 0;
}