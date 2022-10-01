//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)



#include<stdio.h>

   int main() {

      int x,y;
      

    printf("enter a number:");

     scanf("%d" ,&x);

    printf("enter a digit:");

     scanf("%d" ,&y);
     
      int num=x*10;
     x=num+y;
     
     
     
     printf("the new number is:%d",x);
    return 0;
    }