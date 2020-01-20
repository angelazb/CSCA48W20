#include<stdio.h>
#include<string.h>

// EX2: Strings

int main(){
    char original[1024]="This is the original string!";
    char unoriginal[1024]="And this is another string!";

    // Why does this does not work?!
    // original = unoriginal;

    strcpy(original, unoriginal);

    printf("%s\n",original);
}

