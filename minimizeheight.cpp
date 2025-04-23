#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int getMinDiff(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int n = arr.size(),res = arr[n-1] - arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]<k) continue;
        int minN = min(arr[0]+k,arr[i]-k);
        int maxN = max(arr[n-1]-k,arr[i-1]+k);
        
        res =min(res,maxN-minN);
        }
        return res;
    }
    
   
int main(){
    vector<int> arr = {1, 5, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int result = getMinDiff(arr,k);
    cout << "The result is: " << result << endl;
}