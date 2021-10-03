//CPP code for practice.

#include<iostream>
using namespace std;

int main() {
    int a = 5,b = 150;
    for(int i = a; i < b; i++) {
        if(a % i == 1)
            cout<<i;
    }
int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}

}
