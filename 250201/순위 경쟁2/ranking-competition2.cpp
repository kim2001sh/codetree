#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, a = 1, b = 1, scorea = 0, scoreb = 0, cnt = 0;
    char arr2[100] = {};
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr2[i] >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr2[i] == 'A') scorea += arr[i];
        else scoreb += arr[i];

        if (scorea > scoreb && a == 1 && b == 0) ;
        else if (scorea < scoreb && a == 0 && b == 1) ;
        else if (scorea == scoreb && a == 1 && b == 1) ;
        else {
            cnt++;
            if (scorea == scoreb) {
                a = 1;
                b = 1;
            }
            else if (scorea > scoreb) {
                a = 1;
                b = 0;
            }
            else {
                a = 0;
                b = 1;
            }
        }
        
    }

    cout << cnt;

    return 0;
}