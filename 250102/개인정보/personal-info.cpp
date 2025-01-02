#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class a{
    public:
        string name;
        int zl;
        float aha;

        a(string name = "", int zl = 0, float aha = 0) {
            this->name = name;
            this->zl = zl;
            this->aha = aha;
        }
};

bool cmp_name(a x, a y) {
    return (x.name < y.name);
}

bool cmp_zl(a x, a y) {
    return x.zl > y.zl;
}
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    string s;
    int zl;
    float aha;
    a arr[5];


    for (int i = 0; i < 5; i++) {
        cin >> s >> zl >> aha;
        arr[i] = a(s, zl, aha);
    }

    sort(arr, arr + 5, cmp_name);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) cout << arr[i].name << " " << arr[i].zl << " " << arr[i].aha << endl;
    sort(arr, arr + 5, cmp_zl);
    cout << endl << "height" << endl;
    for (int i = 0; i < 5; i++) cout << arr[i].name << " " << arr[i].zl << " " << arr[i].aha << endl;
    return 0;
}