#include <iostream>
#include <vector>
using namespace std;

// this method uses O(n^2) complexity that tells that actual brute force approach 
void segregateElements(vector<int>& arr) {  // another method to use the space and use two loop to fill the element then copyto original ones
    int n = arr.size();
        
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {

            int temp = arr[i];    // element to move
            int j = i;

            // Shift all elements from pos..i-1 to right
            while (j > pos) { 
                arr[j] = arr[j - 1];
                j--;
            }

            arr[pos] = temp;
            pos++;
        }
    }
}

int main() {
    vector<int> arr = {1, -2, 3, -4, -5, 6, 7};

    segregateElements(arr);

    cout << "Result: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
