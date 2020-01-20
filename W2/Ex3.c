#include<stdio.h>

//EX3: Strings

int main(){
    int  array_one[10];
    int  array_two[5];

    for (int i=0; i<5; i++){
       array_two[i]=i;
    }

   // Why does this does not work?!
   // array_one = array_two;

   // It looks like I have to do it manually huh...
    for (int i=0; i<5; i++){
       array_one[i]=array_two[i];
    }

    for (int i=0; i<10; i++){
       printf("The element %d is: %d\n",i, array_one[i]);

       // Why is it printing weird stuff?!
    }

}
