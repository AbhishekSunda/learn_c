// Write a program to read an array of n integers and find the maximum and minimum values in the array using a for loop.
#include<stdio.h>
int main(){
    int array[10],n,i,maximum,minimum;
    printf("Number of elements in the array = ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter values in the array : ");
        scanf("%d", &array[i]);
    }
    maximum = array[0];
    minimum = array[0];
    for ( i = 0; i < n; i++)
    {
        if(array[i]>maximum)
        {
           maximum = array[i];
        }
        if (array[i]<minimum)
        {
           minimum = array[i];
        }   
    }
        printf("Maximum value = %d\n", maximum);
        printf("Minimum value = %d\n", minimum);
    
return 0; 
}