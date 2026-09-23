#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> rearrange_array (vector<int> &arr, int n) {

    vector<int> answer_arr(n);
 
    int posi_index = 0;
    int nega_index = 1;

    for(int i = 0; i < n; i++) {

        if(arr[i] > 0) {

            answer_arr[posi_index] = arr[i];
            
            posi_index += 2;
        }

        else {

            answer_arr[nega_index] = arr[i];

            nega_index += 2;

        }

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