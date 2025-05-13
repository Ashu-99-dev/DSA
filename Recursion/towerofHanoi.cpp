#include <iostream>
using namespace std;

int TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        cout << "Move disk " << n << " from " << A << " to " << C << endl;
        TOH(n-1, B, A, C);
    }
}

int main()
{
    int n = 3; // Number of disks
    cout << "The sequence of moves involved in the Tower of Hanoi are: " << endl;
    TOH(n, 1, 2, 3); // A, B and C are names of rods
    return 0;
}