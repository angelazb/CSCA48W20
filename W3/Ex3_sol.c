#include <stdio.h>
#include<string.h>

// EX3: Implement pokeAround to find the values of oneStr, c, d, e, f

void pokeAround(char *p){
    printf("twoStr: %s\n", p);
    printf("oneStr: %s\n", p + 1024);
    printf("c: %c\n", *(p - 1));
    printf("d: %c\n", *(p - 2));
    printf("e: %c\n", *(p - 3));
    printf("f: %c\n", *(p - 4));
}

int main(){
    char  oneStr[1024]="I am string ONE!";
	char  twoStr[1024]="I am string TWO!";
	char  c='C';
	char  d='*';
	char  e='!';
	char  f='@';

	pokeAround(&twoStr[0]);
}