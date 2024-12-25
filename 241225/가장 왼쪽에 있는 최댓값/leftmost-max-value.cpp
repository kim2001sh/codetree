#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], max_idx, max_val, max_idx2;
    cin >> n;
    max_idx = n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    while (max_idx != 0) {
        max_val = 0;


        for (int i = 0; i < max_idx; i++) {

            if (arr[i] > max_val) {
                max_val = arr[i];
                max_idx2 = i;


            }
            

        }

        cout << max_idx2 + 1 << " ";
        max_idx = max_idx2;
            



    }

    
    return 0;
}