#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string convert(int n, int len){
    string s = "";

    while(n){
        s += ((n & 1) + '0');
        n = n >> 1;
    }

    while(s.size() < len){
        s += '0';
    }

    reverse(s.begin(), s.end());
    return s;
}

int main() {

    vector<int> q = {1,2,3};
    int n = q.size();
    vector<vector<int>> v;

    for(int i = 0; i < (1 << n); i++){

        vector<int> r;
        string h = convert(i, n);

        for(int j = 0; j < n; j++){
            if(h[j] == '1'){
                r.push_back(q[j]);
            }
        }

        v.push_back(r);
    }

    for(int i = 0; i < v.size(); i++){
        cout << "{";
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}