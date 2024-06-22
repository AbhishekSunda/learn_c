// Write a program to find the largest of three integers.

#include<stdio.h>

int max(int x,int y,int z){
if(x>y&&x>z)
return x;
else if(y>z)
return y;
else return z;
}
int main(){
    int x,y,z;
    printf("Enter integer value for x:");
    scanf("%d", &x);
    printf("Enter integer value for y:");
    scanf("%d", &y);
    printf("Enter integer value for z:");
    scanf("%d", &z);

    int largest=max(x,y,z);
    printf("The largest of three integers is %d\n", largest);
return 0;
}