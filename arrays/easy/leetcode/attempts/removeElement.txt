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

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        int left = 0;
        int right = n - 1;

        int count = 0;

        for(int i = left; i <= right; i++) {

            for(int j = right; j > i; j--) {
                
                if(nums[i] == val) {

                    if(nums[j] == val) {

                        swap(nums[i], nums[j - 1]);
                        right--;
                        break;
                    }

                    else {

                        swap(nums[i], nums[j]);
                        right--;
                        break;
                    }

                }

                else if(nums[j] == val) {

                    right--;
                    break;

                }

                else {

                    break;

                }

            }

        }

        for(auto it : nums) {

            if(it != val) {

                count++;

            }

        }

        return count;

    }
};

_______________________________________________________

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        int left = 0;
        int right = n - 1;

        int count = 0;

        for(int i = left; i <= right; i++) {

            for(int j = right; j > i; j--) {
                
                if(nums[j] == val) {

                    right--;
                    continue;

                }
                
                if(nums[i] == val) {
                    
                    if(nums[j] == val) {

                        swap(nums[i], nums[j - 1]);
                        right--;
                        break;
                    }

                    else {

                        swap(nums[i], nums[j]);
                        right--;
                        break;
                    }

                }

                else {

                    break;

                }

            }

        }

        for(auto it : nums) {

            if(it != val) {

                count++;

            }

        }

        return count;

    }
};


_______________________________________________________


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int count = 0;

        for(int i = n - 1; i > 0; i--) {

            for(int j = i - 1; j >= 0; j--) {
                
                if(nums[i] == val && nums[j] == val) {

                    break;

                }

                if(nums[j] != val) {

                    continue;

                }

                swap(nums[i], nums[j]);
                break;

            }    

        }

        for(auto it : nums) {

            if(it != val) {

                count++;

            }

        }

        return count;

    }
};