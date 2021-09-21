#include <iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    
void setdata(string s){
    name =s;
}

void printinfo(){
        cout<<"Name= " ;
        cout<<name<<endl;
        cout<<"Age= " ;
        cout<<age<<endl;
}

    };


int main(){

    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name= ";
        cin>>s;
        arr[i].setdata(s);
        cout<<"Age= ";
        cin>>arr[i].age;
    }

    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}