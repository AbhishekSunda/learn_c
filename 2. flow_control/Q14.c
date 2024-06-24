// Write a program to read an integer n and print the first n Fibonacci numbers using a for loop.

//0,1,1,2,3,5,8,13,21
#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("Fibonacci series till n numbers, n=");
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}