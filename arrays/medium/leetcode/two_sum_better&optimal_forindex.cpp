class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hashmap;

        int n = nums.size();
        int required;

        for(int i = 0; i < n; i++) {

            required = target - nums[i];

            if(hashmap.find(required) != hashmap.end()) {

                return{hashmap[required], i};

            }

            hashmap[nums[i]] = i;
        } 

    }
};