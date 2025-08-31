#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print alphabets (in pyramid form)
        char ch = 'A';   // start from A each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch << " ";
            if (j < i)   // increasing part
                ch++;
            else         // decreasing part
                ch--;
        }

        cout << endl;
    }

    return 0;
}
