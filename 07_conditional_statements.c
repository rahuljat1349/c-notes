#include<stdio.h>
int main(){


//  if else statements

//  ternary operator

//  switch case

char ch;
printf("enter a character : ");
scanf("%c",&ch);
if (ch >= 'A' && ch <= 'Z')
{
    printf("upper case \n");
}
else if (ch >= 'a' && ch <= 'z')
{
    printf("lower case \n");
}
else
{
    printf("not an english letter \n");
};


};