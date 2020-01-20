#include<stdio.h>

//EX3: Strings

int main(){
    int  array_one[10];
    int  array_two[5];

    for (int i=0; i<5; i++){
       array_two[i]=i;
    }

    for (int i=0; i<5; i++){
       array_one[i]=array_two[i];
    }

    for (int i=0; i<10; i++){
       printf("The element %d is: %d\n",i, array_one[i]);
    }

}
