    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    void right_rotate_by_k_places (vector<int> &v1, int n) {

        for(int i = 0; i < n - 1; i++) {

            for(int j = i + 1; j < n; j++) {

                if(v1[i] == 0) {

                    swap(v1[i], v1[j]);

                }
            }
            

        }

        return;

    }
        
    int main () {

        int n;
        
        cout << "Enter size of array: ";
        cin >> n;

        vector<int> v1(n);

        cout << "Enter array elements: " << endl;

        for(int i = 0; i < n; i++) {

            cin >> v1[i];

        }

        right_rotate_by_k_places (v1, n);

        for(int i = 0; i < n; i++) {

            cout << v1[i] << " ";

        }

        return 0;

    }