#include<iostream>
using namespace std;

int main() {
    int T;
    string s;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> s;
        cout << s[0] << s[s.length()-1] << endl;
    }
    return 0;
}