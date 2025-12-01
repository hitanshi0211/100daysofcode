//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define pie 3.14

int main(){

    int r,area,circ;

    printf("enter radius: ");
    scanf("%d",&r);

    
    area=pie*r*r;
    circ=2*pie*r;

    printf("enter area of circle : %d\n");
    printf("enter circumference of circle : %d\n");



    return 0;
}