// Write a program to swap the values of two integers without using a temporary variable.

#include<stdio.h>
int main(){
    int first,second;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    //let x=5,y=3 => x=x+y x become 8; y=x-y y become 5; x=x-y x become 3
    first=first+second;
    second=first-second;
    first=first-second;

    printf("After swapping, value of first number = %d\n", first);
    printf("After swapping, value of second number = %d\n", second);
    return 0;
}