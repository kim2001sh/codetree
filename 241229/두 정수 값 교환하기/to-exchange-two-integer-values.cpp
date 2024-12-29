#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int *a = &n, *b = &m;
    swap(a, b);
    cout << n << " " << m;
    return 0;
}