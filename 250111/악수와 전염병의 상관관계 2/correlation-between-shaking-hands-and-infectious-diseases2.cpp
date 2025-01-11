#include <iostream>
#include <algorithm>

using namespace std;

class c{
    public:
        int time;
        int wjs_to;
        int wjs_cnt;
        int wjs_from;
        int wjs;

       
        c(int time = 0, int wjs_from = 0, int wjs_to = 0) {
            this->time = time;
            this->wjs_from = wjs_from;

            this->wjs_to = wjs_to;
        }
};

bool cmp(c x, c y) {
    return x.time < y.time;
}
    
int main() {
    // Please write your code here.
    int N, K, P, T, t, x, y;
    cin >> N >> K >> P >> T;
    c arr[100];
    for (int i = 0; i < T; i++) {
        cin >> t >> x >> y;
        arr[i] = c(t, x, y);
    }

    sort(arr, arr + T, cmp);

    for (int i = 0; i < N; i++) {
        if (i == P - 1) arr[i].wjs = 1;
        else arr[i].wjs = 0;
        arr[i].wjs_cnt = 0;

    }

    for (int i = 0; i < N; i++) {
        if (arr[arr[i].wjs_from - 1].wjs == 0 && arr[arr[i].wjs_to - 1].wjs == 0) ;
        else if (arr[arr[i].wjs_from - 1].wjs == 1 && arr[arr[i].wjs_to - 1].wjs == 1) {
            arr[arr[i].wjs_from - 1].wjs_cnt += 1;
            arr[arr[i].wjs_to - 1].wjs_cnt += 1;
        }
        else if (arr[arr[i].wjs_from - 1].wjs == 1) {
            if (arr[arr[i].wjs_from - 1].wjs_cnt < K) {
                arr[arr[i].wjs_from - 1].wjs_cnt += 1;
                arr[arr[i].wjs_to - 1].wjs = 1;
            }
        }
        else {
            if (arr[arr[i].wjs_to - 1].wjs_cnt < K) {
                arr[arr[i].wjs_to - 1].wjs_cnt += 1;
                arr[arr[i].wjs_from - 1].wjs = 1;
            }
        }
    }

    for (int i = 0; i < N; i++) cout << arr[i].wjs;
    return 0;
}