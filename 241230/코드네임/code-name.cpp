#include <iostream>
using namespace std;

class ror{
    public:
        char name;
        int score;

        ror(char n = 'a', int s = 0) {
            this->name = n;
            this->score = s;
        }

        
};

int main() {
    // 여기에 코드를 작성해주세요.
    char n;
    int s, min_s = 101, min_idx = 0;
    ror a[5];
     
    for (int i = 0; i < 5; i++) {
        cin >> n >> s;
        a[i] = ror(n, s);
        if (a[i].score < min_s) {
            min_s = a[i].score;
            min_idx = i;
        }
    }

    cout << a[min_idx].name << " " << a[min_idx].score;

    return 0;
}