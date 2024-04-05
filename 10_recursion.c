#include <stdio.h>

int sum(int n);
int res;

int main()
{

    int res = sum(5);
    printf("%d \n", res);
    return 0;
}

int sum(int n)
{
    if (n != 0)
    {
     return res =  n + sum(n - 1) ;
    }
}