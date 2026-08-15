#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int longest_subarray_k_max (vector<int> &arr, int n, int k) {

    int sum = arr[0];
    int len = 0;
    
    int left = 0;
    int right = 0;
    
    while(right < n) {
    
        while(left <= right && sum > k) {
        
            sum -= arr[left];
            left++;
        
        }
    
        if(sum == k) {
            
            len = max(len, right - left + 1);
        
        }
    
        right++;
        if(right < n) {
        
            sum += arr[right];
    
        }
    }
    
    return len;
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

    int k;

    cout << "Enter k: ";
    cin >> k;

    cout << longest_subarray_k_max (arr, n, k);
    
    return 0;

}