// Write a program to read two integers and a character representing an arithmetic operation (+, -, *, /). Perform the operation using a switch statement and print the result. Handle the case of division by zero.
#include <stdio.h>
int main()
{
    
    int a, b;
    char character;
    
    printf("Enter an integer value for a\n");
    scanf("%d", &a);
    printf("Enter an integer value for b\n");
    scanf("%d", &b);
    printf("Enter a character\n");
    scanf(" %c", &character);
    
    switch (character)
    {
    case '+':
        printf("The sum of %d and %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("The difference of %d and %d = %d\n", a, b, a-b);
        break;
    case '*':
        printf("The multiplication of %d and %d = %d\n", a, b, a*b);
        break;
    case '/':
        if(b != 0)
        printf("The division of %d and %d = %f\n", a, b, (float)a/b);
        else printf("Division by 0 is undefined.\n");
        break;
        default: printf("NOT POSSIBLE\n");
    }
return 0;
}