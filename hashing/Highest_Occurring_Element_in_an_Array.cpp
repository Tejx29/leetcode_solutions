#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    unordered_map <int, int> ump;

    for(int i = 0; i < n; i++) {

        ump[arr[i]]++;

    }

    int max_freq = INT_MIN;                          // Saves frequencies
    int Max_value;                                    // Saves values

    int min_freq = INT_MAX;                          // Saves frequencies
    int Min_value;                                   // Saves values

    for(auto it : ump) {
        
        if(it.second > max_freq) {

            max_freq = it.second;

            Max_value = it.first;
        }

        if(it.second < min_freq) {

            min_freq = it.second;

            Min_value = it.first;
        }
    }

    cout << "Min: " << Min_value << endl << "Max: " << Max_value << endl;

    return 0;
}