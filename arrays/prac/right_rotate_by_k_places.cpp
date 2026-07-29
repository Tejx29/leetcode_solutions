    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    void right_rotate_by_k_places (vector<int> &v1, int n, int k) {

        k = k % n;

        int temp = 0;
 
        for(int i = 1; i <= k; i++) {

            temp = v1[n - 1];
            
            for(int j = n - 1; j > 0; j--) {

                v1[j] = v1[j - 1];
    
            }

            v1[0] = temp;

        }

        return;

    }
        
    int main () {

        int n;
        
        cout << "Enter size of array: ";
        cin >> n;

        vector <int> v1(n);

        cout << "Enter array elements: " << endl;

        for(int i = 0; i < n; i++) {

            cin >> v1[i];

        }

        int k = 3;

        right_rotate_by_k_places (v1, n, k);

        for(int i = 0; i < n; i++) {

            cout << v1[i] << " ";

        }

        return 0;

    }