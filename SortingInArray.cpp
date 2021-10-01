#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Size of Array "<<endl;
    cin>>a;
    int arr[a];

    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    int key;
    for(int i=0;i<a;i++){
        if(arr[i]==key){
            cout<<"Key found at "<<i<<" index";
            break;
        }
        else{
            cout<<"Key not found"<<endl;
        }
        }
}
