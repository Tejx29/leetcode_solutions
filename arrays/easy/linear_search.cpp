#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int linear_search (vector<int> &v1, int n, int num) {

    for(int i = 0; i < n; i++) {

        if(v1[i] == num) {

            return i;

        }
    }

    return -1;

}
        
int main () {

    int n;
        
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v1(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> v1[i];

    }

    int num;

    cout << "Enter number to find: ";
    cin >> num;

    cout << linear_search (v1, n, num);

    return 0;

}