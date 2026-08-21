#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int thirdMax(vector<int>& nums) {

    set<int> s1;

    for(auto it : nums) {

        s1.insert(it);

    }

    if(s1.size() < 3) {

        auto max = prev(s1.end(), 1);
        return *max;
        
    }

    else {     

        auto thirdmax = prev(s1.end(), 3);
        return *thirdmax;

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