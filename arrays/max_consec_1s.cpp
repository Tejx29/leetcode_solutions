#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void max_consec_1s (vector<int> &v1, int n, int &count, int &maxi) {

    for(int i = 0; i < n; i++) {
       
        if(v1[i] == 0) {

            count = 0;
            continue;

        }

        count += 1;

        if(count > maxi) {

            maxi = count;

        }

    }

    return;

}

int main() {

    int n;
        
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v1(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> v1[i];

    }

    int count = 0;
    int maxi = 0;

    max_consec_1s (v1, n, count, maxi);    

    cout << maxi;

    return 0;

}