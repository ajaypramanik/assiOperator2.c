//1. Write a program to print unit digit of a given number


#include<stdio.h>


int main() {
      int x;
    printf("enter a number:");
    scanf("%d" ,&x);
    int rem=x%10;
    printf("%d is the unit digit",rem);

    return 0;
}