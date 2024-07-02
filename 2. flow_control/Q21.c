// Write a program to read an integer n and check if it is a prime number
#include<stdio.h>
int main(){
    int n,i,z=0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
           z++;    
    }
    if (z==2)
    {
        printf("%d is a prime number,\n", n);
    }
    else{
         printf("%d is not a prime number.\n", n);
    }   
return 0;    
}