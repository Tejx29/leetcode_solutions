#include<iostream>
using namespace std;

void pattern16 (int n) {

    char ch = 'A';
    
    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {

            cout << ch << " ";
            
        }

        cout << endl;
        ch++;
        
    }
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern16(n);

    return 0;
}
