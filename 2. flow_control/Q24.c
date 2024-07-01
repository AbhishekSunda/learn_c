// Write a program to read an array of n integers and count how many of them are positive, negative, and zero using a for loop.
#include<stdio.h>
int main(){
    int n,i,positive=0,negative=0,zero=0;
    printf("Number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter value for the array %d: ", i);
        scanf("%d", &array[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (array[i]>0)
        {
           positive+=1; 
        }
        else if (array[i]<0)
        {
            negative+=1;
        }
        else 
        {
            zero+=1;
        }   
    }
    printf("Number of positive values = %d\n", positive);
    printf("Number of negative values = %d\n", negative);
    printf("Number of zeroes = %d\n", zero);
return 0;
}