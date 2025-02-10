#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    list<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s == "push_back") {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else if (s == "push_front") {
            int x;
            cin >> x;
            arr.push_front(x);
        }
        else if (s == "pop_front") {
            int x;
            x = arr.front();
            arr.pop_front();
            cout << x << endl;
        }
        else if (s == "pop_back") {
            int x;
            x = arr.back();
            arr.pop_back();
            cout << x << endl;
        }
        else if (s == "size") cout << arr.size() << endl;
        else if (s == "empty") {
            if (arr.size() == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (s == "front") cout << arr.front() << endl;
        else if (s == "back") cout << arr.back() << endl;
    }
    return 0;
}