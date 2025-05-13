#include <iostream>
using namespace std;
// int power(int base, int exp)
// {
//     if (exp == 0)
//         return 1;
//     return power(base, exp - 1) * base;
// }

int power (int base , int exp){
    if(exp==0)
        return 1;
    if(exp%2==0)
        return power(base*base, exp/2);
    else
        return base*power(base*base, (exp-1)/2);  
}
int main()
{
    int base = 2;
    int exp = 10;
    cout << "Power of " << base << " raised to " << exp << " is: " << power(base, exp) << endl;
    return 0;
}