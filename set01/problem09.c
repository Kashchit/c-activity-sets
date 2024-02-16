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
    float i;

    for(i=1.414 ; i*i<n ; i+=0.000001);    
    return i;
}
void output(float n, float sqrroot){
    printf("the square root of %f is %f",n,sqrroot);
}