#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[100] = {0}; // hash array

    // Count frequency
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Print frequency
    cout << "Element Frequency:" << endl;
    for(int i = 0; i < 100; i++) {
        if(hash[i] > 0) {
            cout << i << " -> " << hash[i] << endl;
        }
    }

    return 0;
}
