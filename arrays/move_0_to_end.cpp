    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    void move_0_to_end (vector<int> &v1, int n) {

        int j = -1;

        for(int i = 0; i < n; i++) {

            if(v1[i] == 0) {

                j = i;

                break;
            }
        }

        for(int i = j + 1; i < n; i++) {

            if(v1[i] != 0) {

                swap(v1[i], v1[j]);
                j++;
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

        move_0_to_end (v1, n);

        for(int i = 0; i < n; i++) {

            cout << v1[i] << " ";

        }

        return 0;

    }