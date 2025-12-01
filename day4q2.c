//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main(){

    int a,i,sum=0;


    printf("enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){

        sum+=i;

    
    }

    printf("the sum of numbers is : %d\n",sum);






    return 0;
}