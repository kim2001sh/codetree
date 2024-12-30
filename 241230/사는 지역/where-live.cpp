#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class wkfy{
    public:
        string name;
        int front;
        int back;
        string local;

        wkfy(string n = "A", int f = 0, int b = 0, string l = "a") {
            this->name = n;
            this->front = f;
            this->back = b;
            this->local = l;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int k, f, b, lateidx = 0;
    string n, l, latename = "a";
    cin >> k;
    wkfy wkfys[10];
    char trash;

    for (int i = 0; i < k; i++) {
        cin >> n >> f >> trash >> b >> l;
        wkfys[i] = wkfy(n, f, b, l);
        if (latename < wkfys[i].name) lateidx = i;
        
    }

    cout << "name " << wkfys[lateidx].name << endl << "addr " << wkfys[lateidx].front << trash << wkfys[lateidx].back << endl << "city " << wkfys[lateidx].local;

    




    return 0;
}