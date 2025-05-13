#include <iostream>
using namespace std;

int nCr(int n , int r)
{
    if(r== 0 || r == n)
        return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main()
{
    int n = 5, r = 2;
    cout << "nCr of " << n << " and " << r << " is: " << nCr(n, r) << endl;
    return 0;
}