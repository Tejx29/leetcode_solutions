class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();

        int max = 0;

        if(n < 3) {

            return false;

        }

        for(int i = 0; i < n - 1; i++) {

            cout << "i: " << i << endl;
            cout << "max: " << max << endl;

            if(arr[i + 1] > arr[i]) {

                if(max > 0) {

                    return false;

                }

                continue;

            }

            else if(arr[i + 1] < arr[i]) {

                if(i == 0) return false;

                max = arr[i];

                continue;

            }

            else {

                return false;

            }

        }

        cout << "out" << endl;

        if(max == 0) {

            return false;

        }

        else {

            return true;
        
        }
    }
};