#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {2, 4, 1, 7, 5, 0};
    int n = v.size(), index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(v.begin(), v.end());
        return 0;
    }
    for (int i = n - 1; i > index; i--)
    {
        if (v[i] > v[index])
        {
            swap(v[i], v[index]);
            break;
        }
    }
    reverse(v.begin() + index + 1, v.end());

    cout << "Next permutation is: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

