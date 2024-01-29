// 1. Write a C program to print your name.
#include <stdio.h>
int main(){
    char name[100];
    printf("What is your name ? ");
    scanf("%s",&name);
    printf("Hello, %s",name);
    return 0;
}