
#include <bits/stdc++.h>

using namespace std;


class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> v;
       for(int i = 0; i < N; i++){
           for(int j = 0; j < N; j++){
               v.push_back(Mat[i][j]);
           }
       }
       
       sort(v.begin(),v.end());
       int ind = 0;
       vector<vector<int>> ans(N,vector<int>(N));
       for(int i = 0; i < N; i++){
           for(int j = 0; j < N; j++){
               ans[i][j] = v[ind++];
           }
       }
       
       return (ans);
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
} 