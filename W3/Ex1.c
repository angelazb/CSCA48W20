#include <stdio.h>
#include<string.h>

// EX1: Re-do reverse function from lecture

void reverse(char *input, char *output){

    // Let's get the lenght of the input
    int length =  strlen(input);

    for (int offset = 0; offset < length; offset++){
        // Find what is the next char in the input
        char temp = *(input + offset);
        // Replace the output char with it
        *(output - offset + length - 1) = temp;
    }
}

int main(){
    char str1[1024] = "Hello";
    char str2[1024];

    reverse(str1, str2);

    printf("input is %s\n", str1);
    printf("output is %s\n", str2);
}