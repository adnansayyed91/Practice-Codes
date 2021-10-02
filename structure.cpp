#include <iostream>
using namespace std;

// The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types, just like an array is used to combine the same type of data types


struct student
{
    /* data */
    int rollno;
    int std;
    char bloodgrp;
    float feespaid;
};

// we have used a keyword “typedef” before struct and after the closing bracket of structure, we have written “ep”. Now we can create structure variables without using the keyword “struct” and name of the struct.

typedef struct teacher
{
    /* data */
    int teacherid;
    long long int mobileno;
    char bloodgrp;
    float salary;
} ep;


int main() {
    struct student adnan;
    adnan.rollno = 12;
    adnan.std = 2;
    adnan.bloodgrp = 'A';
    adnan.feespaid = 45000.5l;

    cout<<"The value of student "<<adnan.rollno<<endl;
    cout<<"The value of student "<<adnan.std<<endl;
    cout<<"The value of student "<<adnan.bloodgrp<<endl;
    cout<<"The value of student "<<adnan.feespaid<<endl;
    
    ep zaki;
    zaki.teacherid = 008;
    zaki.mobileno = 9177456780;
    zaki.bloodgrp = 'O';
    zaki.salary = 48755200000;
    
    cout<<"The Value of teacher "<<zaki.teacherid<<endl;
    cout<<"The Value of teacher "<<zaki.mobileno<<endl;
    cout<<"The Value of teacher "<<zaki.bloodgrp<<endl;
    cout<<"The Value of teacher "<<zaki.salary<<endl;
    
    return 0;

}
