
#include <bits/stdc++.h> 
using namespace std; 


class Solution
{   
    public: 
    
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
       

        int count=0;
        int total=r*c;

        int startrow=0;
        int endcolumn=c-1;
        int endrow=r-1;
        int startcolumn=0;

        while(count<total ){
        for (int i = startcolumn ;count<total && i <= endcolumn ; i++)
        {
            ans.push_back(matrix[startrow][i]);
            count++;

        }
        startrow++;
        for (int i = startrow ;count<total &&  i <= endrow ; i++)
        {
            ans.push_back(matrix[i][endcolumn]);
            count++;
        }
        endcolumn--;
        for (int i = endcolumn ;count<total &&  i >= startcolumn ; i--)
        {
            ans.push_back(matrix[endrow][i]);
            count++;

        }
        endrow--;
        for (int i = endrow ;count<total &&  i >= startrow ; i--)
        {
            ans.push_back(matrix[i][startcolumn]);
            count++;

        }
        startcolumn++;
        
        
        

        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  










 