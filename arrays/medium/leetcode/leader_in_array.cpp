class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        
        int n = nums.size();
        
        int leader = nums[n - 1];

        vector<int> leaders_vector;

        leaders_vector.push_back(leader);

        for(int i = n - 2; i >= 0; i--) {

            if(nums[i] > leader) {

                leaders_vector.push_back(nums[i]);
                leader = nums[i];
            }

        } 

        reverse(leaders_vector.begin(), leaders_vector.end());

        return leaders_vector;
    }
};