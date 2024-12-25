#include <iostream>
using namespace std;

int main() {
    int arr[100][100], n, m, cnt = 1;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < m; j++) {
            
            
            cout << cnt++ << " ";
            
        }
        cout << endl;

        

    }
    

    
    return 0;
}