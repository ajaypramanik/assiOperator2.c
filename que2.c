//2. Write a program to print a given number without its last digi

#include<stdio.h>


int main() {
      int x;
    printf("enter a number:");
    scanf("%d" ,&x);
    int number=x/10;
    printf(" the required digit is %d",number);

    return 0;
}