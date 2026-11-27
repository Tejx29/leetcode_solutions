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

vector<vector<int>> pascalTriangle (int n) {

    vector<vector<int>> main_list;

    for(int row = 1; row <= n; row++) {

        vector<int> temp_list;

        for(int col = 1; col <= row; col++) {

            temp_list.push_back(func_nCr(row - 1, col - 1));

        }

        main_list.push_back(temp_list);

    }

    return main_list;

}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<vector<int>> main_list = pascalTriangle(n);

    for (const auto& inner_list : main_list) {

        for (int num : inner_list) {

            cout << num << " ";

        }

        cout << "\n";

    }

    return 0;

}