#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (y == 1) {
        for (int i = 0; i <= x / 2; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < x / 2; i++) {
            for (int j = x / 2; j > i; j--) {
                cout << "*";

            }
            cout << endl;
        }
    }
    else if (y == 2) {
        for (int i = 0; i <= x / 2; i++) {
            for (int j = x / 2; j > i; j--) {
                cout << " ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < x / 2; i++) {
            for (int k = 0; k <= i; k++) {
                cout << " ";
            }
            
            for (int j = x / 2; j > i; j--) {
                cout << "*";

            }
            cout << endl;
        }
    }
    else if (y == 3) {
        
        for (int i = 0; i <= x / 2; i++) {
            for (int k = 0; k < i; k++) cout << " ";
            for (int j = x; j > 2 * i; j -= 1) {
                cout << "*";
            }
            
            cout << endl;
        }
        for (int i = 0; i < x / 2; i++) {
            for (int k = x / 2 - 1; k >= i + 1; k--) cout << " ";
            for (int j = 0; j < 2 * i + 3; j += 1) {
                cout << "*";

            }
            cout << endl;
        }
    }

    else {
        for (int i = 0; i <= x / 2; i++) {
            for (int k = 0; k < i; k++) cout << " ";
            for (int j = x / 2; j >= i; j--) {
                cout << "*";
            }
            
            cout << endl;
        }
        for (int i = 0; i < x / 2; i++) {
            for (int k = 0; k <= x / 2 - 1; k++) cout << " ";
            for (int j = 0; j < i + 2; j++) {
                cout << "*";

            }
            cout << endl;
        }
    }

    
    
    
    return 0;
}