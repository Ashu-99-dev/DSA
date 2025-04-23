#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = 1,b = 1;
    for(int i = 1;i<=n;i++){
        if(i == 1 || i == 2){
            continue;
        }
        int temp = a;
        a = a + b;
        b = temp;
    }
    cout << "The " << n << "th term is: " << a << endl;
    return 0;
}