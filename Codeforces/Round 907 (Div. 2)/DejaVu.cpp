// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         int queries[q];
//         for (int i = 0; i < q; i++)
//         {
//             cin>>queries[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 int power=pow(2,queries[i]);
//                 if (arr[j]%power==0)
//                 {
//                     arr[j]+=power/2;
//                 }
                
//             }
            
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> powers(128, 0); // Precompute powers of 2 for queries 0 to 31
        
        for (int i = 0; i < q; i++) {
            int query;
            cin >> query;
            powers[query]++;
        }
        
        for (int i = 0; i < 128; i++) {
            if (powers[i] > 0) {
                int power = (1 << i);
                for (int j = 0; j < n; j++) {
                    if ((arr[j] & power) == power) {
                        arr[j] += powers[i] * (power / 2);
                    }
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
