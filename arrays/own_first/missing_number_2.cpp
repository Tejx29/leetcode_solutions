#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int missing_num (int n, int hash[]) {

    for(int i = 1; i <= n; i++) {

        if(hash[i] == 0) {

            return i;

        }

    }

    return -1;

}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> v(n);
    
    int hash[n + 1] = {0};

    for(int i = 0; i < n; i++) {

        cin >> v[i];

    }

    for(int i = 0; i < n; i++) {

        hash[v[i]]++;

    }

    cout << missing_num (n, hash);

    return 0;

}