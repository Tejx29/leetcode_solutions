//row still exists?class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

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
};