#include<stdio.h>

int main(){

    int l,b,area,perimeter;

    printf("enter length:\n");
    scanf("%d",&l);

    printf("enter breadth\n");
    scanf("%d",&b);

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("area of rectangle= %.2f\n",area);
    printf("perimeter of rectangle = %.2f\n",perimeter);
    



    return 0;
}