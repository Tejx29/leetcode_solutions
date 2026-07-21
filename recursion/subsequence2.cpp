#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void subsequences2 (int n, int ind, int arr[], vector<int> &ds, int k, int sum) {

    if(ind == n) {

        if(sum == k) {
            for(auto it: ds) {
                cout << it << " ";
            }
            cout << endl;
        }
    
        return;
    }
    
    ds.push_back(arr[ind]);                             // Take condition. This element is added to subsequence

    sum += arr[ind];

    subsequences2(n, ind + 1, arr, ds, k, sum);                  

    ds.pop_back();                                      // Not take condition. This element is not added to subsequence

    sum -= arr[ind];
    
    subsequences2(n, ind + 1, arr, ds, k, sum);                  

}

int main() {
    
    int arr[] = {3, 1, 2, 3};
    vector<int> ds;

    int n = 4;
    int ind = 0;
    int k = 6;
    int sum = 0;

    subsequences2(n, ind, arr, ds, k, sum);

    return 0;
}