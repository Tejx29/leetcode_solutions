class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int element = nums[0];
        int count = 1;
        
        for(int i = 1; i < n; i++) {

            if(nums[i] == element) {

                count++;
                continue;

            }

            else {

                count--;

                if(count == 0) {

                    element = nums[i];
                    count = 1;
                    continue;
                }
                
                continue;

            }

        }     
        
        return element;
    }
};