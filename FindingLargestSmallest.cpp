#include <iostream>
using namespace std;
int main() {
    int i, arr[50], size;
    cout << "enter the array (max size: 50): ";
    cin >> size;

    cout << "enter the elements of the array to be stored: ";
    for (i = 0; i < size; i++) {
        cout << "\nEnter the value: ";
        cin >> arr[i];
    }

    cout << "elements succesfully stored in an array" << endl;

    // finding the largest valued in array: Logic
    int largest = arr[0];
    for (i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "largest element in the array: " << largest << endl;

    // finding the smallest valued in array: Logic
    int smallest = arr[0];
    for (i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "smallest element in the array: " << smallest << endl;

    return 0;
}