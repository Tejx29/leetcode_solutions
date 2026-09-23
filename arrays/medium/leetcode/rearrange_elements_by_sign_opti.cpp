class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> answer_arr(n);
 
        int posi_index = 0;
        int nega_index = 1;

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {

                answer_arr[posi_index] = nums[i];
                
                posi_index += 2;
            }

            else {

                answer_arr[nega_index] = nums[i];

                nega_index += 2;

            }

        }

        return answer_arr;
    }
};