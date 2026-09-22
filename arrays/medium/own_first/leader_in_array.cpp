#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> leader_in_array (vector<int> &arr, int n) {

    int leader = arr[n - 1];

    vector<int> leaders_vector;

    leaders_vector.push_back(leader);

    for(int i = n - 2; i >= 0; i--) {

        if(arr[i] > leader) {

            leaders_vector.push_back(arr[i]);
            leader = arr[i];
        }

    } 

    reverse(leaders_vector.begin(), leaders_vector.end());

    return leaders_vector;
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

    vector<int> ans = leader_in_array(arr, n);

    for(auto it : ans) {

        cout << it << " ";

    }

    return 0;

}