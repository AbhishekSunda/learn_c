// // 4. Checking Palindrome\n
    // Write a program that defines a function to check if a given string is a palindrome.\n
    // The function signature is: int isPalindrome(char* str)\n
    // The program should read a string from the user and use the function to determine if it is a palindrome.\n
    // Example:\n
    // Input: "radar"\n
    // Output: "The string is a palindrome."\n

#include<stdio.h>
#include<string.h>
#define SIZE 15
int isPalindrome(char* str){
    /* str[0] = str[n-1], str[1] = str[n-2], ....
    if strlen is 4(even number), str[0] = str[3] and str[1] = str[2]
    if strlen is 3(odd number), str[0] = str[2] and str[1] = str[1] Middle element will be palindrome always */
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] == str[length - i - 1])
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    char string[SIZE];
    printf("Enter a string : ");
    scanf("%s", string);

    if (isPalindrome(string) == 1)
    {
        printf("%s is a palindrome.\n", string);
    }
    else{
        printf("%s is not a palindrome.\n", string);
    }
    return 0;
}