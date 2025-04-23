#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i =0;i<n;i++){
        char alpha = 'A'+i;
        for(char j ='A';j<='A'+i;j++){
            cout<<alpha<<" ";
        }
        endl(cout);
    }
    
}