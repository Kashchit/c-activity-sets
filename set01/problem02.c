//2. Write a C program to add two numbers.
#include <stdio.h>
int main(){
    int a;
    int b;
    int sum;
    printf("Enter any number:");
    scanf("%d",&a);
    printf("Enter any number:");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of %d and %d is : %d",a,b,sum);
    return 0;
}