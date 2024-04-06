#include <stdio.h>



int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    int directValue = *(&age);

    // printf("%d \n",_age);

    // printf("%p",&age);

    // printf("%d",*ptr);

    // printf("%d",*(&age));

    // printf("%d",directValue);


    // pointer to pointer

    int **pptr = &ptr;



    printf("%d",ptr);
    // or
    printf("%d",*pptr);

    return 0;

}

