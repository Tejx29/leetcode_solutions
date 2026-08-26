class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> missing;
        
        int visited;

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {
                
                visited = (nums[i]) - 1;

                if(nums[visited] >= 0) {

                    nums[visited] = -nums[visited];

                }
            
            }

            else {
                
                nums[i] = -(nums[i]);

                visited = (nums[i]) - 1;

                if(nums[visited] >= 0) {

                    nums[visited] = -nums[visited];

                }

                if(nums[i] > 0) {
                
                    nums[i] = -(nums[i]);
            
                }

            }

        }

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {

                missing.push_back(i + 1);

            }

        }
        
        return missing;
    
    }
};