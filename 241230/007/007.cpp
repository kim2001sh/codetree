#include <iostream>
#include <string>
using namespace std;

class pro{
    public:
        string code;
        string point;
        int time;

        pro(string c, string p, int t) {
            this -> code = c;
            this -> point = p;
            this -> time = t;
        }

        
};

int main() {
    // 여기에 코드를 작성해주세요.
    string s, c;
    
    int i;
    cin >> s >> c >> i;
    pro p = pro(s, c, i);
    cout << "secret code : " << p.code << endl << "meeting point : " << p.point << endl << "time : " << p.time;

    return 0;
}