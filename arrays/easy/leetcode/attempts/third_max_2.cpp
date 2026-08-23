#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int thirdMax(vector<int>& nums) {

    auto max_val = *max_element(nums.begin(), nums.end());

    int first = max_val;
    int second = 0;
    int second_exists = INT_MIN;

    int third = 0;
    int third_exists = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {

        cout << endl;

        cout << "i: " << i << endl;

        if((nums[i] == first || nums[i] == second || nums[i] == third) && (nums[i] != 0)) {

            continue;

        }

        if(second == 0) {

            second = nums[i]; 
            second_exists++;

        }

        else if (third == 0 && nums[i] >= second) {

            third = second;
            second = nums[i];

            third_exists++;
        }

        else if(nums[i] >= second) {

            third = second;
            second = nums[i];

            second_exists++;

        }
        
        else if(nums[i] >= third) {

            third = nums[i];

            third_exists++;

        }

        else if(nums[i] <= third) {

            continue;

        }

        
        else if(third == 0) {

            third = nums[i];
            
            third_exists++;

        }
        
        cout << first << " " << second << " " << third << endl;

    }

    // cout << "Final: " << first << " " << second << " " << third << endl;

    if (second_exists == INT_MIN || third_exists == INT_MIN) {

        return first;

    }

    else {
        
        return third;

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

    cout << thirdMax (arr);
    
    return 0;

}