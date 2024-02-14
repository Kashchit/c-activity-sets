//Write a program to find Sum of composite number in an array of different numbers entered by the user.//
#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main() {
    int size = input_array_size();
    int array[size];
    printf("Enter the array elements:\n");
    input_array(size, array);

    int sum = sum_composite_numbers(size, array);

    output(sum);

    return 0;
}

int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter nuumber : ");
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    for (int j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
            return 1;  
        }
    }

    return 0; 
}


int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i]; 
        }
    }

    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
