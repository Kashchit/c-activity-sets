//7. Write a C program to find sum of all natural numbers until _n_//
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main(){
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}

int input_n(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+= i;
    }
    return sum;
}
void output(int n, int sum){
    printf("The sum from 1 to %d is %d",n,sum);
}