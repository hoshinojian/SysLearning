#include <stdio.h>

unsigned LowestBit(unsigned x){
    unsigned a = 0;
    a = x & ~x + 1;
    return a;
}

int main(){
    int x = 0b100100100;
    printf("%x",LowestBit(x));

    return 0;
}