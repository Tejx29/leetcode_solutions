#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void reverse_recursion (int i, int size, int arr[]) {
    
    if(i > size / 2) {                         // Base condition

        return;

    }
    
    swap(arr[i], arr[size - i - 1]);

    reverse_recursion(i + 1, size, arr);

}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};

    int size = 5;

    reverse_recursion(0, size, arr);

    for(int i = 0; i < size; i++) {
        
        cout << arr[i];

    }

    return 0;
}