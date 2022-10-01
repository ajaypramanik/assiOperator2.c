//3. Write a program to swap values of two int variables


#include<stdio.h>


int main() {
      int a,b,x;
    printf("enter two number:");
    scanf("%d%d" ,&a,&b);
    printf("a=%d b=%d", a,b);
    
    x=a;
    a=b;
    b=x;
    printf(" the required swaped number is \na=%d b=%d",a,b);

    return 0;
}