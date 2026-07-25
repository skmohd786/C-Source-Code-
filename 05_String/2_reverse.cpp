#include<iostream>
#include<string>
using namespace std;
string reverse(string s){
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(j>i){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;

}
int main(){
    string s = "abcdefghi";
    cout<<reverse(s);

}