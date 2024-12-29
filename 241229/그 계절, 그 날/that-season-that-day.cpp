#include <iostream>
#include <string>
using namespace std;

bool yoon(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    if (y % 4 == 0) return true;
    return false;
}

string season(int m) {
    if (m >= 3 && m <= 5) return "Spring";
    if (m >= 6 && m <= 8) return "Summer";
    if (m >= 9 && m <= 11) return "Fall";
    return "Winter";
}



bool skfWk(int y, int m, int d) {
    if (m == 2) {
        if (yoon(y)) {
            if (d <= 29) return true;
            return false;
        }
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
    int y, m, d;
    cin >> y >> m >> d;

    skfWk(y, m, d) ? cout << season(m) : cout << -1;
    return 0;
}