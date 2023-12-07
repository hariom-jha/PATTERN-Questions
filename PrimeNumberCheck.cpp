#include<iostream>
using namespace std;

int main(){

int num;
cout<<"enter the number";
cin>>num;

for(int i=2; i<num-1;i++){
    if(num%i==0){
        cout<<"not  prime number";
        return 0;
    }
    }
    cout<<" Number is Prime Number";

    return 0;
    
}