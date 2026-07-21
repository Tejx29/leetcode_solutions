#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void get_gcd (int n1, int n2) {
    
    vector<int> ls1;
    vector<int> ls2;
    vector<int> common;
    
    for(int i = 1; i * i <= n1; i++) {
        
        if(n1 % i == 0) {

            ls1.push_back(i);

            if(n1 / i != i) {

                ls1.push_back(n1 / i);

            }
        }
    }

    sort(ls1.begin(), ls1.end());

    for(auto it : ls1) {

        cout << it << " ";

    }

    cout << endl;

    
    for(int i = 1; i * i <= n2; i++) {
        
        if(n2 % i == 0) {

            ls2.push_back(i);

            if(n2 / i != i) {

                ls2.push_back(n2 / i);

            }
        }
    }

    sort(ls2.begin(), ls2.end());

    for(auto it : ls2) {

        cout << it << " ";

    }
    cout << endl;


    for(auto it1 : ls1) {

        for(auto it2 : ls2) {

            if(it1 == it2) {

                common.push_back(it1);
            }  
        }

    }

    int gcd = 0;
    
    for(auto it : common) {

        if(it > gcd) {
            gcd = it;
        }

    }

    cout << "GCD: " << gcd;

}

int main() {
    
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    get_gcd (n1, n2); 

    return 0;
}