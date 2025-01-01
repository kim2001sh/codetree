#include <iostream>
#include <algorithm>

using namespace std;

class student{
    public:
        int zl, aha, qjs;
        student(int zl = 0, int aha = 0, int qjs = 0) {
            this->zl = zl;
            this->aha = aha;
            this->qjs = qjs;
        }
};

bool cmp(student a, student b) {
    if (a.zl != b.zl) return a.zl > b.zl;
    if (a.aha != b.aha) return a.aha > b.aha;
    return a.qjs < b.qjs;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n, zl, aha, qjs;
    cin >> n;
    student students[1000];

    for (int i = 0; i < n; i++) {
        cin >> zl >> aha;
        students[i] = student(zl, aha, i + 1);
    }
    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].zl << " " << students[i].aha << " " << students[i].qjs << endl;
    }
    return 0;
}