#include<iostream>
using namespace std;

int main(){
    int rowcount;
    cin>>rowcount;

 for(int row =0; row<rowcount; row++){
     for(int col=0; col<rowcount+1; row++){
        cout<<"*";
     }
     cout<<endl;

 }
 return 0;
}
