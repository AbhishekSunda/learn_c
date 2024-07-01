// Write a program to read two arrays of integers and calculate their dot product using a for loop.

#include<stdio.h>
int main(){
    int vectorA[3];
    int vectorB[3];
    int i,j,dot_product=0;

    for ( i = 0; i < 3; i++)
    {
            printf("Enter value for vectorA %d: ", i);
            scanf("%d", &vectorA[i]);       
    }
    for ( i = 0; i < 3; i++)
    {
            printf("Enter value for vectorB %d: ", i);
            scanf("%d", &vectorB[i]);    
    }
    for ( i = 0; i < 3; i++)
    {
        dot_product += vectorA[i] * vectorB[i];
    }
    
    printf("The dot product of two vectors = %d\n", dot_product);
return 0;   
}