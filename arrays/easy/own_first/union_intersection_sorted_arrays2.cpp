#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void union_sorted (vector<int> v1, vector<int> v2, int n1, int n2, vector <int> &uni) {

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2) {

        if(v1[i] <= v2[j]) {

            if(uni.size() == 0 || uni.back() != v1[i]) {

                uni.push_back(v1[i]);

            }

            i++;

        }

        else {

            if(uni.size() == 0 || uni.back() != v2[j]) {

                uni.push_back(v2[j]);

            }

            j++;

        }

    }

    while (i < n1) {
        if(uni.size() == 0 || uni.back() != v1[i]) {

            uni.push_back(v1[i]);

        }

        i++;

    }
    
    while (j < n2) {
        if(uni.size() == 0 || uni.back() != v2[j]) {

            uni.push_back(v2[j]);

        }

        j++;

    }

    return;
}
        
void intersection_sorted (vector<int> v1, vector<int> v2, int n1, int n2, vector<int> &inter) {

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2) {

        cout << "Before: " << i << " " << j << endl;

        if(v1[i] == v2[j]) {

            if(inter.size() == 0 || inter.back() != v1[i]) {

                inter.push_back(v1[i]);

                cout << "Pushed: " << v1[i] << endl;

            }

            
            i++;
            j++;
            continue;
        }

        if(v1[i] > v2[j] && v1[i] != v2[j]) {

            j++;
            continue;

        }

        i++;

        cout << "After: " << i << " " << j << endl;
    }

    return;
}

int main () {

    int n1, n2;

    cout << "Enter size of array 1: ";
    cin >> n1;


    cout << "Enter size of array 2: ";
    cin >> n2;


    vector<int> v1(n1);
    vector<int> v2(n2);

    vector<int> uni;
    vector<int> inter;

    cout << "Enter first array elements: " << endl;

    for(int i = 0; i < n1; i++) {

        cin >> v1[i];

    }

    cout << "Enter second array elements: " << endl;

    for(int i = 0; i < n2; i++) {

        cin >> v2[i];

    }

    union_sorted (v1, v2, n1, n2, uni);

    cout << "Union Sorted: " << endl;
    
    for(auto it : uni) {

        cout << it << " ";

    }

    intersection_sorted (v1, v2, n1, n2, inter);

    cout << "Intersection sorted: ";

    for(auto it : inter) {

        cout << it << " ";

    }

    return 0;

}