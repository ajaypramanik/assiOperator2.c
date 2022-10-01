//8. Write a program to check whether the given number is even or odd using a bitwise 

#include<stdio.h>


int main() {

      int n ;
       

    printf("enter the numbers:");
     scanf("%d" ,&n);
    int result =n&1;
     if (result==1) {

     printf("odd");
     }
     else {
     printf("even");
     }


     
  
   return 0;
}
