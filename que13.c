//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.

 #include<stdio.h>

    int main() {

      int x,y,z;

     printf("enter a three digit number:");

     scanf("%d" ,&x);
     y=x%10;  
     z=x/10;
     
        z=y*100+z;
       
     printf("the rotated number is %d",z);
    return 0;
    }


    