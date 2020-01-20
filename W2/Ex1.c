#include <stdio.h>

// EX1: Memory Model
float div_by_two(int s){
    float result;
    result = s / 2;
    printf("The result is: %f\n",result);
    return result;
}
int main(){
    int result;
    float x, y, z;
    x = 3.0;
    y = div_by_two(x);
    z = y + 3;
    result = z / 2;
    printf("The result is: %d\n",result);
}