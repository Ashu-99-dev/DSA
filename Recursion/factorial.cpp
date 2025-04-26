#include "iostream"
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 1;
    return sum(n - 1) * n;
}
int main()
{
    int s = 6;
    sum(s);
    cout << "Factorial of " << s << " natural numbers is: " << sum(s) << endl;
    return 0;
}