//wap to input two numbers and display their sum , diff,product,and quotient

#include<stdio.h>
int main(){
     // taking variables 
    int a, b , sum , diff ,prod, quo ;

    printf("enter first number : \n");
    scanf("%d", &a);

    printf("enter second number :\n");
    scanf("%d", &b);

    sum=a+b;
    diff=a-b;
    prod=a*b;
    quo=a/b;

    printf("the sum of two numbers = %d\n",sum);
    printf("the difference of two numbers = %d\n",diff);
    printf("product of two number = %d\n",prod);
    printf("quotiont of two numbers = %d\n",quo);

    return 0;
}