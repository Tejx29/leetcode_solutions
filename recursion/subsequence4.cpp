#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int subsequences2 (int n, int ind, int arr[], int k, int sum) {

    if(ind == n) {

        if(sum == k) {       
            
            return 1;

        }                

        return 0;                  
    }
    
    sum += arr[ind];

    int l = subsequences2(n, ind + 1, arr, k, sum);               
    
    sum -= arr[ind];
    
    int r = subsequences2(n, ind + 1, arr, k, sum);

    return l + r;
}

int main() {
    
    int arr[] = {3, 1, 2, 3};

    int n = 4;
    int ind = 0;
    int k = 6;
    int sum = 0;

    cout << "Number of subsequences: " << subsequences2(n, ind, arr, k, sum);

    return 0;
}