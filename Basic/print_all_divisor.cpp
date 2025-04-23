
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0, divSum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
            {

                divSum += j;
            }
        }

        sum += divSum;
        divSum = 0;
    }

    cout << "The sum of all divisors of the number " << n << " is: " << sum << endl;
}