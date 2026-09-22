#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> rearrange_array (vector<int> &arr, int n) {

    vector<int> positive_arr;
    vector<int> negative_arr;

    vector<int> answer_arr;

    for(auto it : arr) {

        if(it > 0) {

            positive_arr.push_back(it);
            continue;

        }

        negative_arr.push_back(it);
    }

    for(int i = 0; i < n / 2; i++) {

        answer_arr.push_back(positive_arr[i]);
        
        answer_arr.push_back(negative_arr[i]);

    }
 
    return answer_arr;
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

    vector<int> ans = rearrange_array(arr, n);

    for(auto it : ans) {

        cout << it << " ";

    }

    return 0;

}