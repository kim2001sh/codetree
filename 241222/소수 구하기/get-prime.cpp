#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool flag = false;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) flag = true;
        }
        if (flag == false) cout << i << " ";
    }

    

    return 0;
}