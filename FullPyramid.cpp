#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    for(int row=0;row<n; row++){
        // space print
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        // star print
        for(int i=0;i<row+1;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
