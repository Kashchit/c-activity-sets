//11. Write a C program to find the sum of 2 complex numbers//
#include<stdio.h>
struct complex {
   float real;
   float img;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex c1, Complex c2);
void output(Complex c1, Complex c2,Complex sum);

int main()
{
    Complex C1,C2,Sum;
    C1 = input_complex();
    C2 = input_complex();
    Sum = add_complex(C1,C2);
    output(C1,C2,Sum);
    return 0;
}
Complex input_complex()
{
    Complex C;
    printf("Enter the Real part of the number: ");
    scanf("%f",&C.real);
    printf("Enter the Imaginary part of the number: ");
    scanf("%f",&C.img); 
    return C;  
}
Complex add_complex(Complex C1, Complex C2)
{
    Complex Sum;
    Sum.real= C1.real + C2.real;
    Sum.img= C1.img + C2.img;
    return Sum;
}

void output(Complex C1,Complex C2,Complex Sum)
{
    printf("C1 is %f + i%f\n",C1.real,C1.img);
    printf("C2 is %f + i%f\n",C2.real,C2.img);
    
    printf("The sum of the two complex No's is: %f + i%f\n",Sum.real,Sum.img);
}
