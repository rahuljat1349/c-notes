#include <stdio.h>
#include <string.h>


// User defined
struct student {
    int rollNo;
    char name[50];
    float cgpa;
};
int main(){

struct student s1;
s1.rollNo = 001;
strcpy(s1.name,"ajay");
s1.cgpa = 8.2;


struct student s2;
s2.rollNo = 002;
strcpy(s2.name,"vijay");
s2.cgpa = 9.4;

// or
// Initilizing structures

struct student s3 = {003, "Rahul", 8.0};



// puts(s3.name);
// printf("%d",s3.rollNo);




// pointers to structures

struct student *ptr = &s3;

// puts((*ptr).name);
// or (Arrow operator)
puts(ptr->name);




// passing structures to function
void printinfo(struct student s3);
// structure are called by value (copy)




// typedef keyword (alias)
typedef struct coputerEngineeringStudent{
    char name;
    int rollNo;
    float cgpa;
}coe;
// intializing
coe student1;


// 9:11




// Array of strutures
struct student it[100];

// access
it[0].rollNo = 21;

}