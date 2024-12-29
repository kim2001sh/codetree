#include <iostream>
using namespace std;
bool skfWk(int m, int d) {
    if (m >= 13) return false;
    else if (m == 2) {
        if (d <= 28) return true;
        return false;
    }
    else if (m <= 7) {
        if (m % 2 == 1) {
            if (d <= 31) return true;
            return false;
        }
        else {
            if (d <= 30) return true;
            return false;
        }
    }
    else {
        if (m % 2 == 1) {
            if (d <= 30) return true;
            return false;
        }
        else {
            if (d <= 31) return true;
            return false;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;
    skfWk(m, d) ? cout << "Yes" : cout << "No";
    return 0;
}