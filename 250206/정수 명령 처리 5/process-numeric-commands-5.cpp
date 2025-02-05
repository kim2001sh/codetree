#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push_back") {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (s == "pop_back") v.pop_back();
        else if (s == "size") cout << v.size() << endl;
        else {
            int x;
            cin >> x;
            cout << v[x - 1] << endl;
        }
    }

    return 0;
}