// Write a program to read an integer n and print the multiplication table of n up to 10 using a for loop.
#include<stdio.h>
int main(){
    int n,i;
    printf("Multiplication table of ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
return 0;   
}