#include <iostream>
using namespace std;

int add(int x, int y) {return x + y;}
int sub(int x, int y) {return x - y;}
int mul(int x, int y) {return x * y;}
int divide(int x, int y) {return x / y;}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;

    if (o == '+') cout << a << " " << o << " " << c << " = " << add(a, c);
    else if (o == '-') cout << a << " " << o << " " << c << " = " << sub(a, c);
    else if (o == '*') cout << a << " " << o << " " << c << " = " << mul(a, c);
    else if (o == '/') cout << a << " " << o << " " << c << " = " << divide(a, c);
    else cout << "False";
    return 0;
}