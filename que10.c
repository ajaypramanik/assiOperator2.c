//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)


#include<stdio.h>

   int main() {

      int x;

    printf("enter a number:");

     scanf("%d" ,&x);
     int num=x/10;
     x=num*10;
     
     
     
     printf("the new number is:%d",x);
    return 0;
    }