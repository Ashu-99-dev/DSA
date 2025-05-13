#include <iostream>
using namespace std;
// brute force
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// optimized with memoization
int f[1000];

int fib(int n)
{
    if(n <= 1)
        {f[n] = n;
        return n;}
    else{
        if(f[n-2]== -1)
            f[n-2] = fib(n-2);
        if(f[n-1]== -1)
            f[n-1] = fib(n-1);
        f[n] = f[n-1] + f[n-2];
        return f[n-1] + f[n-2];
    }   
    
} 
    


int main()
{   
    for(int i=0;i<1000;i++)
        f[i] = -1;

    int n = 6 ;
    
    cout << "Fibonacci series of " << n << " is: "<< fib(n) << endl;
    return 0;
}