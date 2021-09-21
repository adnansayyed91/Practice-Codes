#include<iostream>
#include<cmath>
using namespace std;

int fun(int);
void prnt();

int main(){
    int num1;
    cout<<"Enter Number "<<endl;
    cin>>num1;
    fun(num1);
    return 0;
}

void prnt(float b){
    cout<<"The Squareroot is "<<b<<endl;
    return;
}

int fun(int a){
    float b=sqrt(a);
    prnt(b);
    return b;
}