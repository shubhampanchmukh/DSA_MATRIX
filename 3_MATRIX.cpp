#include <bits/stdc++.h>
using namespace std;


 

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        vector<int> v;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                v.push_back(matrix[i][j]);
            }
            
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

        int medi=(v.size())/2;
        cout<<endl;
         cout<<v[medi];  
    }
};



int main()
{
    
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i){
            for(int j = 0;j < c; ++j){
                cin>>matrix[i][j];
                }
            }
        // Solution obj;
        // cout<<obj.median(matrix, r, c)<<endl; 
        Solution obj;
        obj.median(matrix,r,c);       
    
    return 0;
}  // } Driver Code Ends