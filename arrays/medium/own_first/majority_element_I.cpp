#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int majority_element_I (vector<int> &arr, int n) {

    int maximum_freq = 0;
    int maximum_val = 0;
    
    unordered_map<int, int> hashmap;
    
    for(auto it : arr) {
    
        hashmap[it]++;
    
    }
    
    
    
    for(auto it : hashmap) {
    
        if(it.second > maximum_freq) {
        
            maximum_freq = it.second;
            maximum_val = it.first;
        
        }
    
        
    }
    
    
    return maximum_val;                                       
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

    cout << majority_element_I(arr, n);
    
    return 0;

}