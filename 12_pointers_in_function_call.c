#include <stdio.h>

int squre(int n);

int _squre(int *n);

int main()
{
    int n = 22;
    int *_n = &n;
   
//   call by value 
    squre(n);
    printf("%d \n",n);

//   call by reference
    _squre(_n);
    printf("%d \n",n);

    return 0;

}

int squre(int n){
    n = n*n;
    printf("%d \n",n);
}
int _squre(int *n){
    *n = (*n) * (*n);
    printf("%d \n",*n);
}
