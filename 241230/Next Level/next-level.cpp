#include <iostream>
#include <string>
using namespace std;

class ror{
    public:
        string id;
        int lv;

        ror(string id = "codetree", int lv = 10) {
            this -> id = id;
            this -> lv = lv;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string u;
    int x;
    cin >> u >> x;

    ror y = ror();
    ror z = ror(u, x);

    cout << "user " << y.id << " lv " << y.lv << endl;
    cout << "user " << z.id << " lv " << z.lv << endl;

    return 0;
}