#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void missing_num (vector<int> v, int n, vector<int> &missing) {

    sort(v.begin(), v.end());

    for(int i = 1; i < n; i++) {

        if(v[i] > v[i - 1] && v[i] - 1 == v[i - 1]) {

            continue;

        }

        else {

            missing.push_back(v[i] - 1);

        }
 
    }

}


int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> v(n);
    vector<int> missing;

    for(int i = 0; i < n; i++) {

        cin >> v[i];

    }

    missing_num (v, n, missing);

    cout << "Missing numbers: ";

    for(auto it : missing) {

        cout << it << " ";

    }

    return 0;

}