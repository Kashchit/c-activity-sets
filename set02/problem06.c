//06. Write a program to reverse a string.//
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(){
     char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);

    return 0;
    }

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = 0;
    char *temp = str;

    while (*temp != '\0') {
        length++;
        temp++;
    }

    for (int i = 0; i < length; i++) {
        rev_str[i] = str[length - i - 1];
    }
    rev_str[length] = '\0'; 
}

void output(char *a, char *reverse_a) {
    printf("Original String: %s\n", a);
    printf("Reversed String: %s\n", reverse_a);
}

