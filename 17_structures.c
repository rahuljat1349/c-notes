#include <stdio.h>
// adding two vectors
typedef struct vector
{
 int x, y;
} vec;

void calcSum(vec *a,vec *b,vec *sum);

int main()
{

    vec v1 = {5, 10};
    vec v2 = {3, 7};

    vec sum = {0};

    calcSum(&v1,&v2,&sum);

    printf("sum of x is : %d \n",sum.x);
    printf("sum of y is : %d \n", sum.y);

    return 0;
};

void calcSum(vec *a, vec *b, vec *sum){
    sum->x = a->x + b->x;
    sum->y = a->y + b->y;
};