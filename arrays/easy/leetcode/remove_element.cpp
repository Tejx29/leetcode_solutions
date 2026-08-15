class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int count = 0;

        for(auto it = nums.begin(); it != nums.end(); ) {

            if(*it == val) {

                it = nums.erase(it);

            }

            else {

                it++;

            }

        }

        for(auto it : nums) {

            count++;

        }

        return count;
    }
};