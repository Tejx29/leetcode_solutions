#include<iostream>
#include<math.h>
using namespace std;

void prime (int n) {
    
    int count = 0;
    
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            
            count++;

            if((n / i) != i) {

                count++;

            }
        }
    }

    if(count == 2) {
        cout << "Prime";
    }
    
    else {
        cout << "Not prime";
    }
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    prime (n); 

    return 0;
}