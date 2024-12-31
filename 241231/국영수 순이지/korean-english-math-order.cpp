#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, kor, eng, math;
    cin >> n;
    string s;
    tuple<int, int, int, string> arr[10];

    for (int i = 0; i < n; i++) {
        cin >> s >> kor >> eng >> math;
        arr[i] = make_tuple(-kor, -eng, -math, s);
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        tie(kor, eng, math, s) = arr[i];
        cout << s << " " << -kor << " " << -eng << " " << -math << endl;
    }
    return 0;
}