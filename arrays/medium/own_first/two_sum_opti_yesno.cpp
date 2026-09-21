#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> two_sum (vector<int> &arr, int n, int target) {
    
    int left = 0;
    int right = n - 1;

    int sum = 0;

    sort(arr.begin(), arr.end());

    while(left < right) {

        sum = arr[left] + arr[right];

        if(sum > target) {

            right--;

        }

        else if(sum < target){

            left++;

        }

        else {

            return{arr[left], arr[right]};

        }

    }

    return{};

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

    int target;

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = two_sum (arr, n, target);

    cout << ans[0] << " " << ans[1] << endl;    

    return 0;

}