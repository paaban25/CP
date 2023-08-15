// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> a[i][j];
            }
        }
        char f = 0;
        for (int i = 2; i > -1; --i) {
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[1][i] != '.') {
                f = a[0][i];
            }
        }
        for (int i = 2; i > -1; --i) {
            if (a[i][0] == a[i][1] && a[i][2] == a[i][1] && a[i][1] != '.') {
                f = a[i][0];
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '.') {
            f = a[1][1];
        }
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.') {
            f = a[1][1];
        }
        if (f == 0 || f == '.') {
            cout << "DRAW\n";
            continue;
        }
        cout << f << '\n';
    }
}