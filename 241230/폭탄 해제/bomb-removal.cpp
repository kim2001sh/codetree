#include <iostream>
#include <string>
using namespace std;

class bomb{
    public:
        string code;
        char color;
        int second;

        bomb(string s, char c, int i) {
            this->code = s;
            this->color = c;
            this->second = i;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    char c;
    int i;
    cin >> s >> c >> i;
    bomb b = bomb(s, c, i);
    cout << "code : " << b.code << endl << "color : " << b.color << endl << "second : " << b.second;
    return 0;
}