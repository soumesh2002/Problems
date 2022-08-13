#include <iostream>
using namespace std;
int main() {
    int i, arr[50], size;
    cout << "enter array size: ";
    cin >> size;
    cout << "\nenter the array elements :: \n";
    for (i = 0; i < size; i++) {
        cout << "enter the values: ";
        cin >> arr[i];
    }

    // first element [0] and last element sizeof(arr) - 1
    cout << "first element of the array: " << arr[0] 
        << "and last element of the array: " << arr[size - 1] << endl;
    return 0;
}