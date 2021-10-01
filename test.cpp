//CPP code for practice.

#include<iostream>
using namespace std;

int main() {
    int a = 5,b = 150;
    for(int i = a; i < b; i++) {
        if(a % i == 1)
            cout<<i;
    }
}
