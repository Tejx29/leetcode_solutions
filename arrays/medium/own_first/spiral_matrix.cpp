#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix, int rows, int cols) {

    int top = 0;
    int bottom =  rows - 1;
    int left = 0;
    int right = cols - 1;

    for(int i = left; i <= right; i++) {

        cout << matrix[top][i];

    }

    cout << endl;

    top++;

    cout << "top: " << top << endl;

    for(int i = top; i <= bottom; i++) {

        cout << matrix[i][right];

    }

    cout << endl;

    right--;

    cout << "right: " << right << endl;

    for(int i = right; i >= left; i--) {

        cout << matrix[bottom][i];

    }    

    cout << endl;

    bottom--;

    cout << "bottom: " << bottom << endl;
    cout << "top: " << top << endl;

    for(int i = bottom; i >= top; i--) {

        cout << matrix[i][left];

    }

    // for (int i = 0; i < rows; ++i) {
        
    //     for (int j = 0; j < cols; ++j) {
        
    //         cout << matrix[i][j] << " ";
        
    //     }
        
    //     cout << "\n";
    // }

}

int main()
{

    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:\n";

    for (int i = 0; i < rows; ++i)
    {

        for (int j = 0; j < cols; ++j)
        {

            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = spiralOrder(matrix, rows, cols);

    for(auto it : ans) {

        cout << it << " ";

    }

    cout << "\nYour 2D Matrix:\n";
    
    for (int i = 0; i < rows; ++i) {
        
        for (int j = 0; j < cols; ++j) {
        
            cout << matrix[i][j] << " ";
        
        }
        
        cout << "\n";
    }

    return 0;
}