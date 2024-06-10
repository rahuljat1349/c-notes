#include <stdio.h>

// file pointer
int main()
{
    // 1, creating a file pointer
    FILE *ptr;

    // 2, opening a file
    ptr = fopen("01_first.c", "r");

    // 3, reading data from file
    char ch;
    fscanf(ptr,"%c",&ch);

    // 4, printing data
    printf("%c \n", ch);
   
    // 5, closing file
    fclose(ptr); // BEST Practices

    return 0;
}
