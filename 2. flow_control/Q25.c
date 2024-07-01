// Write a program to read two arrays of integers and calculate their dot product using a for loop.
#include<stdio.h>
int main(){
    int vector1[3];
    int vector2[3];
    int i,j,dot_product=0;

    for ( i = 0; i < 3; i++)
        {
            printf("Enter value for vector1 %d: ", i);
            scanf("%d", &vector1[i]);
        }
        
    for ( i = 0; i < 3; i++)
        {
            printf("Enter value for vector2 %d: ", i);
            scanf("%d", &vector2[i]);
        }
    for (i = 0; i < 3; i++) {
        dot_product += vector1[i] * vector2[i];
    }
     printf("The dot product of the two vectors = %d\n", dot_product);
return 0;
}