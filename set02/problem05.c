//05.  Write a program to find GCD _(HCF)_ of two numbers//
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int a, b;
    a = input();
    b = input();
    int gcd_result = find_gcd(a, b);
    output(a, b, gcd_result);
    return 0;
}


int input() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    return x;
}

int find_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}
