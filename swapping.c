#include <stdio.h>

void main(){
    int a = 6 , b = 8,temp;
    
    a = a+b ;//a=14
    b = a-b ;//14-8=6
    a= a-b ;//14-6 =8

    printf("a=%d\n", a);
    printf("b=%d\n", b);
}

/*
temp = a;
    a= b;
    b = temp;
*/