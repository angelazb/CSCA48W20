#include<stdio.h>
#include<string.h>

// EX2: Strings

int main(){
    char original[1024]="This is the original string!";
    char unoriginal[1024]="And this is another string!";

    strcpy(original, unoriginal);

    printf("%s\n",original);
}

