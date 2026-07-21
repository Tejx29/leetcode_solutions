#include<iostream>
using namespace std;

int main () {                                       // for small alphabets - 26, for all big and small - 256 

    string s;
    cin >> s;

    int hash[26] = {0};                             // precompute

    for(int i = 0; i < s.size(); i++) {

        hash[s[i] - 'a']++;                         // hash[s[i]] for captial alphabets aswell

    }

    int q;
    cin >> q;

    while(q--) {

        char ch;
        cin >> ch;

        cout << hash[ch - 'a'] << endl;             // fetch    // hash[s[i]] for captial alphabets
        cout << q;
    }

    return 0;
}