#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[100]; 


bool isValid(int maxSum) {
    int count = 1, sum = 0;

    for (int i = 0; i < n; i++) {
        if (sum + arr[i] > maxSum) {
            count++; 
            sum = arr[i]; 
            if (count > m) return false; 
        } else {
            sum += arr[i];
        }
    }
    
    return true;
}


int minMaxSum() {
    int low = *max_element(arr, arr + n);
    int high = 0, result = 0;

    for (int i = 0; i < n; i++) {
        high += arr[i]; 
    }

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isValid(mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << minMaxSum() << endl;
    return 0;
}