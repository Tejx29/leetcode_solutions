#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int maxi = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > maxi) {

            maxi = arr[i];

        }
    }

    int k = 5;
    int count = 0;

    for(int i = 0; i < k; i++) {

        while(arr[i] <= maxi) {

            arr[i]++;
            count++;

        }


    }

    cout << count;



    return 0;
}