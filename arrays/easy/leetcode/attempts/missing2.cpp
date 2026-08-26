#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void thirdMax(vector<int>& nums) {

    int n = nums.size();

    int visited;

    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) {
            
            visited = (nums[i]) - 1;

            if(nums[visited] >= 0) {

                nums[visited] = -nums[visited];

                // cout << nums[visited];


            }
        
        }
        else {
            
            nums[i] = -(nums[i]);

            visited = (nums[i]) - 1;

            if(nums[visited] >= 0) {

                nums[visited] = -nums[visited];

                // cout << nums[visited];


            }

            nums[i] = -(nums[i]);

            cout << nums[i];

        }

    }

    for(auto it : nums) {

        cout << it << " ";

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