//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.


#include<stdio.h>

   int main() {

      float dollar,rupee;
      

    printf("enter rupee amount:");

     scanf("%f" ,&rupee);

    
    dollar=rupee/76.26;
     printf("the amount is:%fusd",dollar);
    return 0;
    }


    