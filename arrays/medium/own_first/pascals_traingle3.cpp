#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int func_nCr (int row, int col) {

    long long result = 1;

    for(int i = 0; i < col; i++) {

        result = result * (row - i);
        result = result / (i + 1);

    }

    return result;

}

int main() { 

    int n;

    cout << "Enter n: ";
    cin >> n;

    list<list<int>> main_list;

    for(int row = 1; row <= n; row++) {

        list<int> temp_list;

        for(int col = 1; col <= row; col++) {

            temp_list.push_back(func_nCr(row - 1, col - 1));

        }

        main_list.push_back(temp_list);

    }
    
    for (const auto& inner_list : main_list) {
        // Inner loop: accesses each integer inside the inner list
        for (int num : inner_list) {
            cout << num << " ";
        }
        cout << "\n"; // Move to next line after each inner list
    }
}