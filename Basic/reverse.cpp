#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=0;
    while(n!=0){
        int lst = n%10;
        ans = ans*10 + lst;
        n = n/10;
    }
    cout<<"Reverse of the number is: "<<ans<<endl;
}