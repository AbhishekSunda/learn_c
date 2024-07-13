// Write a program to read an integer n and print a right-angled triangle pattern of * with n rows using a for loop.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of rows = ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
      for ( j = 1; j <= i; j++) 
      {
        printf("*");
      }
        printf("\n"); 
    }
return 0;   
}