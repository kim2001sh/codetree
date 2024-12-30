#include <iostream>
#include <string>
using namespace std;

class tkdvna{
    public:
        string name;
        int code;

        tkdvna(string n = "codetree", int c = 50) {
            this->name = n;
            this->code = c;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    int c;
    cin >> n >> c;
    tkdvna a;
    tkdvna b = tkdvna(n, c);
    cout << "product " << a.code << " is " << a.name << endl << "product " << b.code << " is " << b.name;
    return 0;
}