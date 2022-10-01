//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    printf("Size of char: %d byte\n",sizeof(char));
    printf("Size of int: %d bytes\n",sizeof(int));
    printf("Size of float: %d bytes\n",sizeof(float));
    printf("Size of double: %d bytes", sizeof(double));
    return 0;
}