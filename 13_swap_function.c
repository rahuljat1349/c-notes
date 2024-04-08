#include <stdio.h>

int swap(int *x,int *y);


int main()
{
  int a = 12, b = 50;

swap(&a,&b);

printf("a is : %d, b is : %d", a,b);
   


    return 0;

}

int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}