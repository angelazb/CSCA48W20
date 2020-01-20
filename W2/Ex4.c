#include <stdio.h>
#include <string.h>

void swap(char word1[1024], char word2[1024]){
    char temp[1024];

    // word1 in temp
    strcpy(temp, word1);
    // word2 in word1
    strcpy(word1, word2);
    // temp in word2
    strcpy(word2, temp);
}

int main(){

    char string1[1024] = "Hello";
    char string2[1024] = "Hi";

    printf("Before swap: string 1 is %s and string 2 is %s\n", string1, string2);

    swap(string1, string2);

    printf("After swap: string 1 is %s and string 2 is %s\n", string1, string2);

}
