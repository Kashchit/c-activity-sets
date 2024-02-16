//02.  Write a program to find if a triangle is scalene.//
#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);


int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle:\n");
    a = input_side();
    b = input_side();
    c = input_side();

    int isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);

    return 0;
}

int input_side() {
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; 
    } else {
        return 0; 
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d and %d is scalene\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d and %d is not scalene\n", a, b, c);
    }
}
