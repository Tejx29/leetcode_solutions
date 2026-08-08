#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int longest_subarray_k_max (vector<int> &arr, int n, int k) {

    int sum = 0;
    int len = 0;
    int step = 0;
    
    for(int i = 0; i < n; i++) {
    
        cout << "i: " << i << endl;
    
        for(int j = step; j < n; j++) {
    
            cout << "j: " << j << endl;
            
            if(sum > k) {
            
                cout << "sum greater 1: " << sum << endl;
                
                sum -= arr[i];
                
                cout << "sum greater 1 after: " << sum << endl;
                
                step = j;
                
                cout << "step: " << step << endl;
                
                break;
            
            }
    
            sum += arr[j];
            
            cout << "sum: " << sum << endl;
            
            if(sum == k) {
            
                len = j - i;
                
                cout << "len: " << len << endl;
                
            }
            
            if(sum > k) {
            
                cout << "sum greater 1: " << sum << endl;
                
                sum -= arr[i];
                
                cout << "sum greater 1 after: " << sum << endl;
                
                step = j;
                
                cout << "step: " << step << endl;
            
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