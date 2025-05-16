#include <bits/stdc++.h>
using namespace std;

void subSequence(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it: ds)
            cout << it << " ";
        cout << endl;
        return;
    }

    // Include the current element
    ds.push_back(arr[ind]);
    subSequence(ind+1, ds, arr, n);

    // Exclude the current element
    ds.pop_back();
    subSequence(ind+1, ds, arr, n);
}


int main(){
    int arr[] = {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    subSequence(0, ds, arr, n);
    return 0;
}