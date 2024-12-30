#include <iostream>
#include <string>
using namespace std;

class ql{
    public:
        int y;
        int m;
        int d;

        string week;
        string weather;

        ql(int y = 0, int m = 0, int d = 0, string w = "w", string we = "we") {
            this->y = y;
            this->m = m;
            this->d = d;
            this->week = w;
            this->weather = we;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d, n, idx = 0;
    cin >> n;
    string w, we, s = "", s_min = "99999999", a, b;
    char trash;
    ql qls[100];

    for (int i = 0; i < n; i++) {
        cin >> y >> trash >> m >> trash >> d >> w >> we;
        if (m >= 10) a = to_string(m);
        else a = "0" + to_string(m);

        if (d >= 10) b = to_string(d);
        else b = "0" + to_string(d);
        s = to_string(y) + a + b;
        m = stoi(a);
        d = stoi(b);
        if (s < s_min && we == "Rain") {
            s_min = s;
            idx = i;
            qls[i] = ql(y, m, d, w, we);
        }

    }

    a = to_string(qls[idx].m);
    b = to_string(qls[idx].d);

    if (a.length() == 1) a = "0" + a;
    if (b.length() == 1) b = "0" + b;

    cout << qls[idx].y << trash << a << trash << b << " " << qls[idx].week << " Rain";

    
    
    return 0;
}