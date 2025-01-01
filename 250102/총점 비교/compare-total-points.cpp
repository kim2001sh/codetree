#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class student{
    public:
        int a, b, c;
        string s;
        student(string s = "", int a = 0, int b = 0, int c = 0) {
            this->s = s;
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

bool cmp(student x, student y) {
    return (x.a + x.b + x.c < y.a + y.b + y.c);
}
    


int main() {
    // 여기에 코드를 작성해주세요.

    int n, a, b, c;
    string s;
    cin >> n;
    student arr[10];
    for (int i = 0; i < n; i++) {
        cin >> s >> a >> b >> c;
        arr[i] = student(s, a, b, c);
    }
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << arr[i].s << " " << arr[i].a << " " << arr[i].b << " " << arr[i].c << endl;
    }

    
    return 0;
}