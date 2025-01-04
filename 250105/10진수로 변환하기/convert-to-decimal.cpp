#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int arr[8], num = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) num = num * 2 + s[i] - '0';
    cout << num;


    return 0;
}