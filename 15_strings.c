#include <stdio.h>
#include <string.h>

void salting(char pass[]);
int main(){
    // char str[] = "Rahul";

    // printf("%s",str);
    // or
    // puts(str);

    // string methods


    // char newStr[100];
    // char ch;
    // int i = 0;

    // while (ch != '\n')
    // {
    //     scanf("%c", &ch);
    //     newStr[i] = ch;
    //     i++;
    // }
    // newStr[i] = '\0';
    // puts(newStr);
    


// salting
char pass[100];
scanf("%c",&pass);
salting(pass);






}



void salting(char pass[]){
    char salt[] = "123";
    char newpass[200];
    strcpy(newpass,pass);
    strcat(newpass,salt);
    puts(newpass);



}