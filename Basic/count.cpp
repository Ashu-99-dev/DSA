#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = 0,num = n;
    while(n!=0){
        int lst = n%10;
        if(lst!=0&&num%lst==0){
            ans++;
        }
        n = n/10;
    }
    cout<<"The number of digits which divides the number "<<num<<" are: "<<ans<<endl;
}