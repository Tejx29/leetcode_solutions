class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s1;
        unordered_set<int> s2;

        for(auto it : nums1) {

            s1.insert(it);

        }

        for(auto it : nums2) {

            if(s1.count(it)) {

                s2.insert(it);

            }

        }

        return {s2.begin(), s2.end()};
    }
};