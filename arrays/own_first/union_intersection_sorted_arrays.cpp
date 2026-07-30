#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void union_sorted (vector<int> v1, vector<int> v2, int n1, int n2, set <int> &s) {

    for(int i = 0; i < n1; i++) {

        s.insert(v1[i]);
        
    }

    for(int i = 0; i < n2; i++) {

        s.insert(v2[i]);

    }

    return;

}
        
int main () {

    int n1, n2;
    
    set <int> s;

    cout << "Enter size of array 1: ";
    cin >> n1;


    cout << "Enter size of array 2: ";
    cin >> n2;


    vector<int> v1(n1);
    vector<int> v2(n2);

    cout << "Enter first array elements: " << endl;

    for(int i = 0; i < n1; i++) {

        cin >> v1[i];

    }

    cout << "Enter second array elements: " << endl;

    for(int i = 0; i < n2; i++) {

        cin >> v2[i];

    }

    union_sorted (v1, v2, n1, n2, s);

    for(auto it : s) {

        cout << it << " ";

    }

    return 0;

}