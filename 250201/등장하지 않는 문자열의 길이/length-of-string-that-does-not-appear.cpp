#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string s;

    cin >> n >> s;

    for (int i = 1; i <= n; i++) { //length
        bool flag = false;
        
        
        for (int j = 0; j < n - i + 1; j++) {
            
            string ss = "";
            
            for (int k = 0; k < i; k++) {
                ss += s[j + k];
            }
            
            for (int k = j + 1; k < n - i + 1; k++) {
                string sss = "";
                for (int l = 0; l < i; l++) {
                    sss += s[k + l];
                }
                if (ss == sss) flag = true;
            }
            
        }
        if (flag == false) {
            cout << i;
            return 0;
        }


    }

    
    return 0;
}