//5. Write a program to input a three-digit number and display the sum of the digits.


#include<stdio.h>


int main() {

      int x ;
      int rem=0;
      int sum=0;


    printf("enter three  digit numbers:");
     scanf("%d" ,&x);
     
     rem=x%10;
     x=x/10;
     sum =sum+rem;

     rem=x%10;
     x=x/10;
     sum =sum+rem;

     rem=x%10;
     x=x/10;
     sum =sum+rem;

     printf("%d",sum);
    return 0;
}