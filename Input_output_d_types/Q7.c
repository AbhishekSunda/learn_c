// Write a program to print the size of different data types in C. i.e. int , float, char, double

#include<stdio.h>
int main(){
    int INT;
    float FLOAT;
    char CHAR;
    double DOUBLE;

    printf("%lu\n", sizeof(INT));
    printf("%lu\n", sizeof(FLOAT));
    printf("%lu\n", sizeof(CHAR));
    printf("%lu\n", sizeof(DOUBLE));
return 0;
}