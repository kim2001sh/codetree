#include <iostream>
using namespace std;

bool yoon(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    if (y % 4 == 0) return true;
    else return false;
}
    


int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;

    yoon(y) ? cout << "true" : cout << "false";
    
    return 0;
}