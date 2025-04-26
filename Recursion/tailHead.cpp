#include "iostream"
using namespace std;
void tail (int n){
    if(n>0){
        cout<<n<<" ";
        tail(n-1);  // tail recursion
    }
}
int main(){
    int x = 5;
    tail(x);

    return 0;
}