#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void subsequences (int n, int ind, int arr[], vector<int> &ds) {

    if(ind == n) {
        for(auto it: ds) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    
    ds.push_back(arr[ind]);                             // Take condition. This element is added to subsequence

    subsequences(n, ind + 1, arr, ds);                  

    ds.pop_back();                                      // Not take condition. This element is not added to subsequence

    subsequences(n, ind + 1, arr, ds);                  

}

int main() {
    
    int arr[] = {3, 1, 2};
    vector<int> ds;

    int n = 3;
    int ind = 0;

    subsequences(n, ind, arr, ds);

    // for(auto it: l1) {
    //     cout << it << " ";
    // }

    // l2.push_back(l1[ind]);

    // for(auto it: l2) {
    //     cout << it << " ";
    // }

    return 0;
}