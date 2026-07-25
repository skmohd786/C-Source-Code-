#include<iostream>
#include<climits>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ="sfafsgwetadsssftqaaasssttgtrrrsssss";
    int n = s.size();
    int mx = INT_MIN;
    int smax = INT_MIN;
    char min = 0, max = 0;
    for(int i=0; i<n; i++){
        int count = 1;
        for(int j= i+1; j<n; j++){
            if(s[i] == s[j]) count++;      // skip the character what had been already counted 
        }
        if(mx < count){
            max = s[i];
            mx = count;
        }
        else if(smax != mx && smax < count && s[i] != max){
            min = s[i];
            smax = count;
        }
    }
    cout<<max<<mx<<endl;
    cout<<min<<smax;
}