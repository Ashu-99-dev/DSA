#include "iostream"
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;
}
int main(){
    int s = 10;
    sum(s);
    cout << "Sum of first " << s << " natural numbers is: " << sum(s) << endl;
    return 0;
}