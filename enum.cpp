#include <iostream>
using namespace std;

//Enums are user-defined types which consist of named constants. Enums are used to make the program more readable. 

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<lunch<<endl;

    //1st we have created an enum “Meal” in which we have stored three named constants (breakfast, lunch, dinner). 2nd we have assigned the value of “lunch” to the variable “m1” and at the end, we have printed “m1”. The main thing to note here is that (breakfast, lunch, dinner) are constants; the value for “breakfast” is “0”, the value for “lunch” is “1” and the value for “dinner” is “2”.

    return 0;
}