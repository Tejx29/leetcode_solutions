#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void thirdMax(vector<int>& nums) {

    int n = nums.size();
    
    set<int> s1;

    for(int i = 0; i < n; i++) {

        s1.emplace(nums[i]);

    }

    for(int i = 1; i <= n; i++) {

        if(s1.count(i)) {

            continue;

        }

        cout << i << " ";
    }
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

    thirdMax (arr);
    
    return 0;

}