#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int n,num,M,number;
    cin >> n;
    map<int,int> m;
    for(int i = 0; i < n; i++) {
        cin >> num;
        m[num]++;
    }
    cin >> M;
    for(int j = 0; j < M; j++) {
        cin >> number;
        cout << m[number] << " ";
    }
}