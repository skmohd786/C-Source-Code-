#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int n = arr.size();
    int a = 0, b = 0;
    int maxsum = INT_MIN;
    int sum = 0;

    while (b < n) {
        sum += arr[b];

        if ((b - a + 1) == k) {
            maxsum = max(maxsum, sum);
            sum -= arr[a];
            a++;
        }
        b++;
    }

    cout << maxsum;
    return 0;
}
