#include<stdio.h>

void printHello();
void loop();
int main(){

printHello();
loop();


};

void printHello(){
    printf("Hello \n");
}
// Recursion
int i = 0;
void loop(){
    if (i <= 5 )
    {
        printf("%d \n",i);
        i++;
        loop();
    }
    
};