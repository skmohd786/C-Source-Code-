#include <iostream>
#include <cmath>
using namespace std;

void printFactors(int n) {
    int sq = sqrt(n);

    // First print smaller factors
    for (int i = 1; i <sq; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    // Then print larger factors
    for (int j = sq; j >= 1; j--) {    // logn time
        if (n % j == 0) { // avoid duplicates for perfect squares
            cout << n/j << " ";
        }
    }
}

int main() {
    printFactors(49);
    return 0;
}
