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

    for(int p=0;p<a-1;p++){
        for(int q=p+1;q<a;q++){
            if(arr[q]<arr[p]){
                int temp=arr[p];
                arr[p]=arr[q];
                arr[q]=temp;
            }
        }
    }

    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}