#include <bits/stdc++.h>
using namespace std;

//Here below code doesn't run here becuase i'm not able to take input for vector matrix
//But it runs in leetcode

// Total 3 ans are present here 3rd one is done by me

//-----------------1st soln easy-------------------

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = matrix.size();
//         int c = matrix[0].size();
//         int total = r * c;

//         for (int i = 0; i < total; ++i) {
//             if (matrix[i/c][i%c] == target) return true;
//             if (matrix[i/c][i%c] > target) return false;
//         }

//         return false;
//     }

//-----------------2nd soln by binary search-------------------

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // we are doing binary search
//         // taking row and column

//       int row=matrix.size();
//         int col=matrix[0].size();

//         // initializing start and end
//         int start=0;
//         int end=(row*col)-1;

//         // initializing mid

//         int mid=start+(end-start)/2;
//         while(start<=end){

// ##############// here is the important part if we divide mid by column number then we get row and if we do mid modulo column then we get column number

//              int element=matrix[mid/col][mid%col];

//             // this is pure binary search method now

//             if(element==target){
//                 return 1;
//             }
//             if(element<target){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//             mid=start+(end-start)/2;

//         }
//         return 0;
//     }

//-----------------3rd soln by me by linear search-------------------

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int row, col;
    cout << "Enter row and col: ";
    cin >> row >> col;
   
   
    int target;
    cout << "\nEnter target: ";
    cin >> target;
    cout << "\nEnter matrix:";
    vector<vector<int> > matrix(row); 

        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
    cout << searchMatrix(matrix, target);

    return 0;
}