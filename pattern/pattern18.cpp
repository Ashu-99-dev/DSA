#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i =0;i<n;i++){
        char alpha = 'E'-i;
        for(char j =0;j<=i;j++){
            cout<<alpha++<<" ";
        }
        endl(cout);
    }
}