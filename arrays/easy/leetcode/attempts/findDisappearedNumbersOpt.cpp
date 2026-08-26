#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findDisappearedNumbers (vector<int>& nums) {

    int n = nums.size();

    int visited;

    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) {
            
            visited = (nums[i]) - 1;

            if(nums[visited] >= 0) {

                nums[visited] = -nums[visited];

            }
        
        }
        else {
            
            nums[i] = -(nums[i]);

            visited = (nums[i]) - 1;

            if(nums[visited] >= 0) {

                nums[visited] = -nums[visited];

            }

            if(nums[i] > 0) {
                
                nums[i] = -(nums[i]);
            
            }

        }

    }

    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) {

            cout << i + 1 << " ";

        }

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

    findDisappearedNumbers (arr);
    
    return 0;

}