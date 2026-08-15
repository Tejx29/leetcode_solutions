#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int longest_subarray_k_max (vector<int> &arr, int n, int k) {

    int sum = 0;
    int len = 0;
    int step = 0;
    
    for(int i = 0; i < n; i++) {
    
        for(int j = step; j < n; j++) {
            
            if(sum > k) {
                
                sum -= arr[i];
                
                step = j;
                
                break;
            
            }
    
            sum += arr[j];
            
            if(sum == k) {
            
                if(i == 0) {
                
                    len = (j - i) + 1;
                
                }
                
                else {
                    
                    len = j - i;
                
                }

            }
            
            if(sum > k) {
                
                sum -= arr[i];
                
                step = j;
                
            }
        
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