#include<stdio.h>
int main(){
    // type declaration => declare var before using it!
    // Valid
    int a = 22;
    int b = a;
    int c = b+1;
    int d= 1,e;

    int a,b,c;
    a=b=c=1;

    // Arithmetic instructions => operands must be RHS
    // Valid
    int sum = a+b; 
    int multiply = a*b;


};