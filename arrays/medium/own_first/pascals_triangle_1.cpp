#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int combinations (int &n_res, int &r_res, int &den_res, int &combi) {

    combi = n_res / (r_res * den_res);

    return combi;

}

int facto (int &n, int &r, int &combi) {

    int den = n - r;
    int den_res = 1;

    for(int i = 1; i <= den; i++) {

        den_res = den_res * i;

    }
    
    int n_res = 1;

    for(int i = 1; i <= n; i++) {

        n_res = n_res * i;

    }

    int r_res = 1;

    for(int i = 1; i <= r; i++) {

        r_res = r_res * i;

    }

    combinations (n_res, r_res, den_res, combi);

    return combi;

}


int main () {

    int row = 5;
    int col = 3;

    int n = row - 1;
    int r = col - 1;
    int combi = 1;

    cout << facto (n, r, combi);

    return 0;

}