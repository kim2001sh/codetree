#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, zl, aha;
    string s;
    cin >> n;
    tuple<int, int, string> arr[10];
    for (int i = 0; i < n; i++) {
        cin >> s >> zl >> aha;
        arr[i] = make_tuple(zl, aha, s);
    }
    

    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        tie(zl, aha, s) = arr[i];
        cout << s << " " << zl << " " << aha << endl;
    }

    return 0;
}