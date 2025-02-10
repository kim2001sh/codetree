#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    stack<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            int a;
            cin >> a;
            arr.push(a);
        }
        else if (s == "pop") {
            int x = arr.top();
            cout << x << endl;
            arr.pop();
        }
        else if (s == "size") cout << arr.size() << endl;
        else if (s == "empty") {
            if (arr.size() == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else cout << arr.top() << endl;
    }
    return 0;
}