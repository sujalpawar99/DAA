/*
Implement a problem of number of zeroes.
Statement: Given an array of 1s and 0s which has all
1s first followed by all 0s? Find the number of 0s.
Count the number of zeroes in the given array.
Input: arr[] = {1, 1, 1, 1, 0, 0} Output: 2
Input: arr[] = {1, 0, 0, 0, 0} Output: 4
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array of 1's and 0's: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count = n - i;
            break;
        }
    }

    cout << "Count of zero is " << count << endl;

    return 0;
}
