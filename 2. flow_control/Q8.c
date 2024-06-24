// Write a program to read three integers and print the largest one using if-else statements.
#include<stdio.h>
int main(){
    int x,y,z;
    
    printf("Enter value of x\n");
    scanf("%d", &x);
    printf("Enter value of y\n");
    scanf("%d", &y);
    printf("Enter value of z\n");
    scanf("%d", &z);

    int largest;
    if(x>y&&x>z){
        largest = x;
        
    }
    else if(y>z){
        largest = y;
        
    }
    else{ largest = z;
    
    }

    printf("The largest integer value is %d\n", largest);
return 0;
}