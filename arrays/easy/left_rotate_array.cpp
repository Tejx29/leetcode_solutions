    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    void left_rotate (vector<int> &v1, int n) {
        
        int temp = v1[0];
 
        for(int j = 1; j < n; j++) {

            v1[j - 1] = v1[j];

        }

        v1[n - 1] = temp;

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


        left_rotate (v1, n);

        for(int i = 0; i < n; i++) {

            cout << v1[i];

        }

        return 0;

    }