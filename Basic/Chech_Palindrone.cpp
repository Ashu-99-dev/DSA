#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp = n;
    int ans=0;
    if(n<0){
        cout<<"The number is not palindrone."<<endl;
        return 0;
    }
    while(n!=0){
        int lst = n%10;
        ans = ans*10 + lst;
        n = n/10;
    }
    if(ans==temp){
        cout<<"The number is a Palindrone."<<endl;
    }
    else{
        cout<<"The number is not a Palindrone."<<endl;
    }
}