// Write a program to read an array of n integers and print the array in reverse order using a for loop.
#include<stdio.h>
int main(){
    int n,array[100],i;
    printf("Enter the number of elements in the array = ");
    scanf("%d", &n);

    for ( i = 0; i <= n-1; i++) 
    {
        printf("Enter integer value : ");
        scanf("%d", &array[i]);
    }
    printf("array : ");
    for ( i = 0; i <= n-1; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nreverse array : ");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

return 0;
}