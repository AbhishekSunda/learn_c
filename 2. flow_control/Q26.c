// Write a program to read a 2D array of size m x n and print the transpose of the matrix using nested for loops.

//If we take transpose of the matrix, rows and columns interchange. 
#include<stdio.h>
int main(){
    int m, n;
    printf("Enter no. of rows = ");
    scanf("%d", &m);
    printf("Enter no. of columns = ");
    scanf("%d", &n);
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter elements at %d%d : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nMatrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}