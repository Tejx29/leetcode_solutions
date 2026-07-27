#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void duplicates (vector<int> &v1, int n) {
    
    sort(v1.begin(), v1.end());                             // If question doesn't mention sorted array explicitly

    int i = 0;

    for(int j = 1; j < n; j++) {

        if(v1[j] != v1[i]) {

            v1[i + 1] = v1[j];
            
            i++;
        }
    }

    int unique = i + 1;

    for(int i = 0; i < unique; i++) {

        cout << v1[i] << " ";

    }

    return;                                           

}

int main () {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    vector <int> v1(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> v1[i];

    }


    duplicates (v1, n);

    return 0;

}