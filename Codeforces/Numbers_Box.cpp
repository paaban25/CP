#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int sum = 0;
        int nonZero = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                sum += abs(arr[i][j]);
                if (arr[i][j] != 0) {
                    nonZero++;
                    minAbs = min(abs(arr[i][j]), minAbs);
                }
            }
        }

        if (nonZero % 2 == 0) {
            cout << sum << endl;
        } 
        else{
            cout<<sum-(2*minAbs)<<endl;
        }
    }
    return 0;
}
