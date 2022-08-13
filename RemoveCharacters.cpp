// removing characters in a string
#include <iostream>
using namespace std;
int main() {
    string line;
    int i;
    cout << "enter a string: ";
    cin >> line;

    cout << "\nthe original string is: " << line << endl;

    int len = line.size();
    for (i = 0; i < len; i++) {
        if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) {
            // for finding any other characters rather than alphabets
            line[i] = '\0';
        }
    }

    cout << "\nafter character removed the string: " << line << endl;
    return 0;
}