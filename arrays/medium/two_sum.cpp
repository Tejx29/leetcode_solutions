#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> two_sum (vector<int> &arr, int n, int target) {
    
    unordered_map<int, int> hashmap;

    for(int i = 0; i < n; i++) {

        int needed = target - arr[i];

        if(hashmap.find(needed) != hashmap.end()) {
            return {hashmap[needed], i};
        }

        hashmap[arr[i]] = i;
    }

    return {};
}


int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = two_sum (arr, n, target);

    cout << ans[0] << " " << ans[1] << endl;    

    return 0;

}