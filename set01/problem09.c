//9. Write a C program to find the [square root] of a number//
#include<stdio.h>
float input(); 
float square_root(float n); 
void output(float n, float sqrroot);

int main()
{
    float n,sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n,sqrroot);
}


float input()
{
    float n;
    printf("Enter the number: ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x=n, y=1,epsilion = 0.0000001;
    while(x-y>epsilion)
     {
        x = (x+y)/2;
        y = n/x;
    }
    return x;
}
void output(float n, float sqrroot){
    printf("the square root of %f is %f",n,sqrroot);
}