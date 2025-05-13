#include <iostream>
using namespace std;
// brute force approach
// double taylor(int x, int n){
//     static double p = 1, f = 1;
//     double r;
//     if(n == 0)
//         return 1;
    
//     r = taylor(x, n - 1);
//     p = p * x;
//     f = f * n;
//     return r + (p / f);
    
// } 

// optimized approach
double taylor(int x, int n){
    static double s = 1;
    if(n == 0)
        return s;
    s = s * x / n + 1;
    return taylor(x, n - 1);
    
}

int main()
{
    int x = 1, n = 10;
    cout << "Taylor series of " << x << " is: " << taylor(x, n) << endl;
    return 0;
}