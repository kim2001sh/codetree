#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[15] = {};

    for (int i = 0; i < 15; i++) cin >> arr[i];

    for (int a = 1; a <= 40; a++) {
        for (int b = a; b <= 40; b++) {
            for (int c = b; c <= 40; c++) {
                for (int d = c; d <= 40; d++) {
                    int tf[15] = {};
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == b && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == c && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + b && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == b + c && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == c + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == d + a && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + c&& tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == b + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + b + c && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + b + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + c + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == b + c + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (arr[i] == a + b + c + d && tf[i] == 0) {
                            tf[i]++;
                            break;
                        }
                    }
                    for (int i = 0; i < 15; i++) {
                        if (tf[i] != 1) break;
                        if (i == 14) cout << a << " " << b << " " << c << " " << d;
                    }
                }
            }
        }
    }
    return 0;
}