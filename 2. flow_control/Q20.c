// Write a program to read integers from the user until a negative number is entered. Print the sum of all entered positive integers using a while loop.
#include<stdio.h>
int main(){
    int n,value,i=1,sum=0;
    printf("Enter number of integers = ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        printf("Enter the value\n");
        scanf("%d", &value);
        
        if (value < 0)
            {
                break;
            }
        if (value > 0)
        {
            sum += value; 
            
        }
        
        i++;
    }
        printf("Sum of all positive integers untill a negative integer is entered = %d\n", sum);

 return 0;   
}