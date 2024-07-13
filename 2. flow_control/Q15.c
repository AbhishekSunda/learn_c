// Write a program to read an array of n integers and print the array in reverse order using a for loop.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array = ");
    scanf("%d", &n);
    int array[n];

    for ( int i = 0; i < n; i++) 
    {
        printf("Enter integer value : ");
        scanf("%d", &array[i]);
    }
    printf("array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nreverse array : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

return 0;
}