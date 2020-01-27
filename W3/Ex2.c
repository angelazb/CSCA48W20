#include <stdio.h>
#include<string.h>

// EX2: Reverse function but in place

void reverse_inplace(char *input){

    // Let's get the lenght of the input
    int length =  strlen(input);

    for (int offset = 0; offset < length / 2 + 1; offset++){
        // Find what is the next char in the input and store it in temp
        char temp = *(input + offset);
        // Replace that char with the value of the "opposite" char
        *(input + offset) = *(input + length - offset - 1);
        // Replace the "opposite" char with the temp
        *(input + length - offset - 1) = temp;
    }
}

int main(){
    char str1[1024] = "Hello";

    printf("Before: %s\n", str1);

    reverse_inplace(str1);

    printf("After: %s\n", str1);
}