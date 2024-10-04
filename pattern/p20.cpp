#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    int space = 2 * n - 2;  // Initial number of spaces

    for (int i = 1; i <= 2 * n - 1; i++) {
        // Calculate stars for the current row
        int stars = i;
        if (i > n) stars = 2 * n - i;

        // Print stars (first set)
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // Print stars (second set)
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;

        // Adjust the number of spaces
        if (i < n) {
            space -= 2;  // Decrease space in the first half
        } else {
            space += 2;  // Increase space in the second half
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print(n);
    }
}
