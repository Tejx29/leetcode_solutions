#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix, int rows, int cols) {

    int top = 0;
    int bottom =  rows - 1;
    int left = 0;
    int right = cols - 1;

    vector<int> answer;

    while(top <= bottom && left <= right) {
        
        //right
        
        for(int i = left; i <= right; i++) {

            answer.push_back(matrix[top][i]);

        }

        top++;


        //down

        for(int i = top; i <= bottom; i++) {

            answer.push_back(matrix[i][right]);
        }

        right--;


        // left

        if(top <= bottom) {
        
            for(int i = right; i >= left; i--) {

                answer.push_back(matrix[bottom][i]);

            }    

            bottom--;
        }

        // up

        if(left <= right) {
            for(int i = bottom; i >= top; i--) {

                answer.push_back(matrix[i][left]);

            }

            left++;
        }
    }

    return answer;

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

    return 0;
}