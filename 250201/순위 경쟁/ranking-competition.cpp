#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, a = 1, b = 1, c = 1, scorea = 0, scoreb = 0, scorec = 0, cnt = 0;
    char arr2[100] = {};
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr2[i] >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr2[i] == 'A') scorea += arr[i];
        else if (arr2[i] == 'B') scoreb += arr[i];
        else scorec += arr[i];
    

        if (scorea > scoreb && scorea > scorec && a == 1 && b == 0 && c == 0) ;
        else if (scorea < scoreb && scorec < scoreb && a == 0 && b == 1 && c == 0) ;
        else if (scorea < scorec && scoreb < scorec && a == 0 && b == 0 && c == 1) ;
        else if (scorea == scoreb && scorea == scorec && a == 1 && b == 1 && c == 1) ;
        else if (scorea < scoreb && scoreb == scorec && a == 0 && b == 1 && c == 1) ;
        else if (scoreb < scorec && scorec == scorea && a == 1 && b == 0 && c == 1) ;
        else if (scorec < scorea && scoreb == scorea && a == 1 && b == 1 && c == 0) ;
        else {
            cnt++;
            if (scorea == scoreb && scoreb == scorec) {
                a = 1;
                b = 1;
                c = 1;
            }
            else if (scorea > scoreb && scorea > scorec) {
                a = 1;
                b = 0;
                c = 0;
            }
            else if (scorea < scoreb && scorec < scoreb) {
                a = 0;
                b = 1;
                c = 0;
            }
            else if (scorea < scorec && scoreb < scorec) {
                a = 0;
                b = 0;
                c = 1;
            }
            else if (scorea < scoreb && scoreb == scorec) {
                a = 0;
                b = 1;
                c = 1;
            }
            else if (scoreb < scorec && scorec == scorea) {
                a = 1;
                b = 0;
                c = 1;
            }
            else if (scorec < scorea && scoreb == scorea) {
                a = 1;
                b = 1;
                c = 0;
            }
            
        }
        
    }

    cout << cnt;

    return 0;
}